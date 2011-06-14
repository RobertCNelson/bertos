/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2010 Develer S.r.l. (http://www.develer.com/)
 *
 * -->
 *
 * \author Daniele Basile <asterix@develer.com>
 *
 * \brief Empty project.
 *
 * This is a minimalist project, it just initializes the hardware of the
 * supported board and proposes an empty main.
 */

#include "hw/hw_led.h"
#include "hw/hw_lcd.h"

#include <cfg/debug.h>

#include <cpu/irq.h>
#include <drv/spi_dma.h>

#include <drv/timer.h>
#include <drv/kbd.h>
#include <drv/lcd_ili9225.h>

#include <kern/proc.h>
#include <kern/monitor.h>

/* Bitmap to display on the OLED display */
static Bitmap lcd_bitmap;
/* Raster associated to the Bitmap image */
static uint8_t raster[RAST_SIZE(LCD_WIDTH, LCD_HEIGHT)];
/* LCD spi context with DMA access */
struct SpiDma spi;

static void init(void)
{
    /* Enable all the interrupts */
    IRQ_ENABLE;

	/* Initialize debugging module (allow kprintf(), etc.) */
	kdbg_init();
	/* Initialize LED driver */
	LED_INIT();
	/* Initialize system timer */
	timer_init();

	/*
	 * Kernel initialization: processes (allow to create and dispatch
	 * processes using proc_new()).
	 */
	proc_init();

	/* Init spi on dma to drive lcd */
	spi_dma_init(&spi);
	spi_dma_setclock(LCD_SPICLOCK);
	/* Initialize the dispaly */
	lcd_ili9225_init(&spi.fd);
	/* Init the backligth display leds */
	LCD_BACKLIGHT_INIT();
	lcd_setBacklight(LCD_BACKLIGHT_MAX);
	/* Draw an empty Bitmap on the screen */
	gfx_bitmapInit(&lcd_bitmap, raster, LCD_WIDTH, LCD_HEIGHT);
	/* Refresh the display */
	lcd_ili9225_blitBitmap(&lcd_bitmap);
	/* Initialize the keypad driver */
	kbd_init();

}


static void NORETURN led_process(void)
{
	static int i = 0;
	static bool turn = true;

	/* Periodically blink the led (toggle each 100 ms) */
	while (1)
	{
		if (turn)
		{
			LED_ON(i);
			if (i)
				LED_OFF(i - 1);

			if (i == 2)
			{
				turn = false;
				timer_delay(70);
			}
			else
				i++;
		}
		else
		{
			LED_OFF(i);
			if (i > 0)
				LED_ON(i-1);

			if (!i)
			{
				turn = true;
				timer_delay(70);
			}
			else
				i--;
		}
		timer_delay(300);
	}
}

int main(void)
{
	/* Hardware initialization */
	init();

	/* Create a new child process */
	proc_new(&led_process, NULL, KERN_MINSTACKSIZE * 2, NULL);

	/*
	 * The main process is kept to periodically report the stack
	 * utilization of all the processes (1 probe per second).
	 */
	while (1)
	{
		monitor_report();
		timer_delay(1000);
	}

	return 0;
}

