/*
 * <Description>
 *
 * Copyright (C) 2017, STMicroelectronics - All Rights Reserved
 * Author: YOUR NAME <> for STMicroelectronics.
 *
 * License type: GPLv2
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#ifndef _STM32_DEF_BUILD_
#define _STM32_DEF_BUILD_

#if defined(STM32F091xC)
#define CMSIS_STARTUP_FILE "startup_stm32f091xc.s"
#elif defined(STM32F407xx)
#define CMSIS_STARTUP_FILE "startup_stm32f407xx.s"
#elif defined(STM32F429xx)
#define CMSIS_STARTUP_FILE "startup_stm32f429xx.s"
#else
#error UNKNOWN CHIP
#endif
#endif //_STM32_DEF_BUILD_