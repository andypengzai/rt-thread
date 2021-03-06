/*
 * File      : board.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2014, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2014-11-23     Bright      add board.h to this bsp
 */

// <<< Use Configuration Wizard in Context Menu >>>
#ifndef __BOARD_H__
#define __BOARD_H__

#include "M051Series.h"

#define BOARD_PLL_CLOCK           50000000

/* board configuration */
// <o> Internal SRAM memory size[Kbytes]
//	<i>Default: 64
#define M05X_SRAM_SIZE         4
#define M05X_SRAM_END          (0x20000000 + M05X_SRAM_SIZE * 1024)

void rt_hw_board_init(void);

//#define PRINT_RCC_FREQ_INFO

#endif

// <<< Use Configuration Wizard in Context Menu >>>
