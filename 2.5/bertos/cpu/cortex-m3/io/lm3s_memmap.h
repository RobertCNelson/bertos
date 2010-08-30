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
 * \brief LM3S1968 memory map.
 */

#ifndef LM3S_MEMMAP_H
#define LM3S_MEMMAP_H

/**
 * The following are defines for the base address of the memories and
 * peripherals.
 */
/*\{*/
#define FLASH_BASE              0x00000000  //< FLASH memory
#define SRAM_BASE               0x20000000  //< SRAM memory
#define WATCHDOG0_BASE          0x40000000  //< Watchdog0
#define WATCHDOG1_BASE          0x40001000  //< Watchdog1
#define GPIO_PORTA_BASE         0x40004000  //< GPIO Port A
#define GPIO_PORTB_BASE         0x40005000  //< GPIO Port B
#define GPIO_PORTC_BASE         0x40006000  //< GPIO Port C
#define GPIO_PORTD_BASE         0x40007000  //< GPIO Port D
#define SSI0_BASE               0x40008000  //< SSI0
#define SSI1_BASE               0x40009000  //< SSI1
#define UART0_BASE              0x4000C000  //< UART0
#define UART1_BASE              0x4000D000  //< UART1
#define UART2_BASE              0x4000E000  //< UART2
#define I2C0_MASTER_BASE        0x40020000  //< I2C0 Master
#define I2C0_SLAVE_BASE         0x40020800  //< I2C0 Slave
#define I2C1_MASTER_BASE        0x40021000  //< I2C1 Master
#define I2C1_SLAVE_BASE         0x40021800  //< I2C1 Slave
#define GPIO_PORTE_BASE         0x40024000  //< GPIO Port E
#define GPIO_PORTF_BASE         0x40025000  //< GPIO Port F
#define GPIO_PORTG_BASE         0x40026000  //< GPIO Port G
#define GPIO_PORTH_BASE         0x40027000  //< GPIO Port H
#define PWM_BASE                0x40028000  //< PWM
#define QEI0_BASE               0x4002C000  //< QEI0
#define QEI1_BASE               0x4002D000  //< QEI1
#define TIMER0_BASE             0x40030000  //< Timer0
#define TIMER1_BASE             0x40031000  //< Timer1
#define TIMER2_BASE             0x40032000  //< Timer2
#define TIMER3_BASE             0x40033000  //< Timer3
#define ADC0_BASE               0x40038000  //< ADC0
#define ADC1_BASE               0x40039000  //< ADC1
#define COMP_BASE               0x4003C000  //< Analog comparators
#define GPIO_PORTJ_BASE         0x4003D000  //< GPIO Port J
#define CAN0_BASE               0x40040000  //< CAN0
#define CAN1_BASE               0x40041000  //< CAN1
#define CAN2_BASE               0x40042000  //< CAN2
#define ETH_BASE                0x40048000  //< Ethernet
#define MAC_BASE                0x40048000  //< Ethernet
#define USB0_BASE               0x40050000  //< USB 0 Controller
#define I2S0_BASE               0x40054000  //< I2S0
#define GPIO_PORTA_AHB_BASE     0x40058000  //< GPIO Port A (high speed)
#define GPIO_PORTB_AHB_BASE     0x40059000  //< GPIO Port B (high speed)
#define GPIO_PORTC_AHB_BASE     0x4005A000  //< GPIO Port C (high speed)
#define GPIO_PORTD_AHB_BASE     0x4005B000  //< GPIO Port D (high speed)
#define GPIO_PORTE_AHB_BASE     0x4005C000  //< GPIO Port E (high speed)
#define GPIO_PORTF_AHB_BASE     0x4005D000  //< GPIO Port F (high speed)
#define GPIO_PORTG_AHB_BASE     0x4005E000  //< GPIO Port G (high speed)
#define GPIO_PORTH_AHB_BASE     0x4005F000  //< GPIO Port H (high speed)
#define GPIO_PORTJ_AHB_BASE     0x40060000  //< GPIO Port J (high speed)
#define EPI0_BASE               0x400D0000  //< EPI0
#define HIB_BASE                0x400FC000  //< Hibernation Module
#define FLASH_CTRL_BASE         0x400FD000  //< FLASH Controller
#define SYSCTL_BASE             0x400FE000  //< System Control
#define UDMA_BASE               0x400FF000  //< uDMA Controller
#define ITM_BASE                0xE0000000  //< Instrumentation Trace Macrocell
#define DWT_BASE                0xE0001000  //< Data Watchpoint and Trace
#define FPB_BASE                0xE0002000  //< FLASH Patch and Breakpoint
#define NVIC_BASE               0xE000E000  //< Nested Vectored Interrupt Ctrl
#define TPIU_BASE               0xE0040000  //< Trace Port Interface Unit
/*\}*/

/**
 * The following definitions are deprecated.
 */
/*\{*/
#ifndef DEPRECATED
/*\}*/

#define WATCHDOG_BASE           0x40000000  //< Watchdog
#define SSI_BASE                0x40008000  //< SSI
#define I2C_MASTER_BASE         0x40020000  //< I2C Master
#define I2C_SLAVE_BASE          0x40020800  //< I2C Slave
#define QEI_BASE                0x4002C000  //< QEI
#define ADC_BASE                0x40038000  //< ADC

#endif /* DEPRECATED */

#endif /* LM3S_MEMMAP_H */
