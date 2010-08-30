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
 * Copyright 2006 Develer S.r.l. (http://www.develer.com/)
 * All Rights Reserved.
 * -->
 *
 * \brief DC motor hardware-specific definitions
 *
 * \version $Id$
 *
 * \author Daniele Basile <asterix@develer.com>
 */

#ifndef HW_DC_MOTOR_H
#define HW_DC_MOTOR_H

typedef enum MotorDCMap
{

	/* Put here motor dc declaration */
	MOTOR_DC_CNT

} MotorDCMap;

/*
 * Init all pin and device to manage dc motor.
 */
#define MOTOR_DC_INIT() \
    do { \
		/* Implement me! */ \
    } while (0)


/*
 * Enable DC motor.
 */
#define DC_MOTOR_ENABLE(dev) \
	do { \
		/* Implement me! */ \
	} while (0)

/*
 * Disable DC motor.
 */
#define DC_MOTOR_DISABLE(dev) \
	do { \
		/* Implement me! */ \
	} while (0)

/*
 * Set direction for DC motor.
 */
#define DC_MOTOR_SET_DIR(dev, dir) \
	do { \
		/* Implement me! */ \
	} while (0)


#endif /* HW_DC_MOTOR_H */
