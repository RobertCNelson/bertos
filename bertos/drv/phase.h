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
 * Copyright 2005 Develer S.r.l. (http://www.develer.com/)
 * -->
 *
 *
 * \brief Phase partialization driver with TRIACs.
 *
 * \author Francesco Sacchi <batt@develer.com>
 *
 * $WIZ$ module_name = "phase"
 * $WIZ$ module_depends = "timer"
 * $WIZ$ module_configuration = "bertos/cfg/cfg_phase.h"
 * $WIZ$ module_hw = "bertos/hw/hw_phase.h", "bertos/hw/phase_map.h", "bertos/hw/hw_phase.c"
 */

#ifndef DRV_PHASE_H
#define DRV_PHASE_H

#include "hw/phase_map.h"

#include "cfg/cfg_phase.h"

#include <drv/timer.h>

#define TRIAC_POWER_K   CONFIG_TRIAC_MAX_DUTY * (1 / sqrt(2 * CONFIG_TRIAC_MAX_POWER))

/**
 * \name Types for duty and power.
 * \{
 */
typedef uint16_t triac_duty_t;
typedef uint16_t triac_power_t;
/* \} */


DB(extern bool phase_initialized;)

/**
 * \name Type for triac control.
 * \{
 */
typedef struct Triac
{
	Timer  timer;      /**< Timer for phase control. */
	triac_duty_t duty; /**< Duty cycle of the channel. */
	bool   running;    /**< True when the timer is active. */
} Triac;
/* \} */

void phase_setDutyUnlock(TriacDev dev, triac_duty_t duty);
void phase_setDuty(TriacDev dev, triac_duty_t duty);
void phase_setPower(TriacDev dev, triac_power_t power);

void phase_init(void);


#endif /* DRV_PHASE_H */
