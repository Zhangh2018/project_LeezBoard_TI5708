/********************************************************************
 * Copyright (C) 2013-2014 Texas Instruments Incorporated.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/
#ifndef CSLR_SGU_H_
#define CSLR_SGU_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <ti/csl/cslr.h>
#include <ti/csl/tistdtypes.h>


/**************************************************************************
* Register Overlay Structure for __ALL__
**************************************************************************/
typedef struct {
    volatile Uint32 ATB_FIFO_CONTROL_0;
    volatile Uint32 ATB_FIFO_STAT0_0;
    volatile Uint32 ATB_FIFO_STAT1_0;
    volatile Uint32 ATB_FIFO_STAT2_0;
    volatile Uint32 ATB_FIFO_CONTROL_1;
    volatile Uint32 ATB_FIFO_STAT0_1;
    volatile Uint32 ATB_FIFO_STAT1_1;
    volatile Uint32 ATB_FIFO_STAT2_1;
} CSL_SguRegs;


/**************************************************************************
* Register Macros
**************************************************************************/

/* ATB_FIFO_CONTROL_0 */
#define CSL_SGU_ATB_FIFO_CONTROL_0                              (0x0U)

/* ATB_FIFO_STAT0_0 */
#define CSL_SGU_ATB_FIFO_STAT0_0                                (0x4U)

/* ATB_FIFO_STAT1_0 */
#define CSL_SGU_ATB_FIFO_STAT1_0                                (0x8U)

/* ATB_FIFO_STAT2_0 */
#define CSL_SGU_ATB_FIFO_STAT2_0                                (0xCU)

/* ATB_FIFO_CONTROL_1 */
#define CSL_SGU_ATB_FIFO_CONTROL_1                              (0x10U)

/* ATB_FIFO_STAT0_1 */
#define CSL_SGU_ATB_FIFO_STAT0_1                                (0x14U)

/* ATB_FIFO_STAT1_1 */
#define CSL_SGU_ATB_FIFO_STAT1_1                                (0x18U)

/* ATB_FIFO_STAT2_1 */
#define CSL_SGU_ATB_FIFO_STAT2_1                                (0x1CU)


/**************************************************************************
* Field Definition Macros
**************************************************************************/

/* ATB_FIFO_CONTROL_0 */

#define CSL_SGU_ATB_FIFO_CONTROL_0_MONITORING_ENABLE_MASK       (0x00000001U)
#define CSL_SGU_ATB_FIFO_CONTROL_0_MONITORING_ENABLE_SHIFT      (0U)
#define CSL_SGU_ATB_FIFO_CONTROL_0_MONITORING_ENABLE_RESETVAL   (0x00000000U)
#define CSL_SGU_ATB_FIFO_CONTROL_0_MONITORING_ENABLE_MAX        (0x00000001U)

#define CSL_SGU_ATB_FIFO_CONTROL_0_PROGRAMMABLE_THRESHOLD_MASK  (0x0000FF00U)
#define CSL_SGU_ATB_FIFO_CONTROL_0_PROGRAMMABLE_THRESHOLD_SHIFT  (8U)
#define CSL_SGU_ATB_FIFO_CONTROL_0_PROGRAMMABLE_THRESHOLD_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_CONTROL_0_PROGRAMMABLE_THRESHOLD_MAX   (0x000000ffU)

#define CSL_SGU_ATB_FIFO_CONTROL_0_RESETVAL                     (0x00000000U)

/* ATB_FIFO_STAT0_0 */

#define CSL_SGU_ATB_FIFO_STAT0_0_PEAK_FIFO_THRESHOLD_MASK       (0x000000FFU)
#define CSL_SGU_ATB_FIFO_STAT0_0_PEAK_FIFO_THRESHOLD_SHIFT      (0U)
#define CSL_SGU_ATB_FIFO_STAT0_0_PEAK_FIFO_THRESHOLD_RESETVAL   (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT0_0_PEAK_FIFO_THRESHOLD_MAX        (0x000000ffU)

#define CSL_SGU_ATB_FIFO_STAT0_0_RESETVAL                       (0x00000000U)

/* ATB_FIFO_STAT1_0 */

#define CSL_SGU_ATB_FIFO_STAT1_0_SECOND_MAX_COUNT_ABOVE_THRESHOLD_MASK  (0x0000FFFFU)
#define CSL_SGU_ATB_FIFO_STAT1_0_SECOND_MAX_COUNT_ABOVE_THRESHOLD_SHIFT  (0U)
#define CSL_SGU_ATB_FIFO_STAT1_0_SECOND_MAX_COUNT_ABOVE_THRESHOLD_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT1_0_SECOND_MAX_COUNT_ABOVE_THRESHOLD_MAX  (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT1_0_MAX_COUNT_ABOVE_THRESHOLD_MASK  (0xFFFF0000U)
#define CSL_SGU_ATB_FIFO_STAT1_0_MAX_COUNT_ABOVE_THRESHOLD_SHIFT  (16U)
#define CSL_SGU_ATB_FIFO_STAT1_0_MAX_COUNT_ABOVE_THRESHOLD_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT1_0_MAX_COUNT_ABOVE_THRESHOLD_MAX  (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT1_0_RESETVAL                       (0x00000000U)

/* ATB_FIFO_STAT2_0 */

#define CSL_SGU_ATB_FIFO_STAT2_0_SECOND_MAX_STALL_CYCLE_COUNT_MASK  (0x0000FFFFU)
#define CSL_SGU_ATB_FIFO_STAT2_0_SECOND_MAX_STALL_CYCLE_COUNT_SHIFT  (0U)
#define CSL_SGU_ATB_FIFO_STAT2_0_SECOND_MAX_STALL_CYCLE_COUNT_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT2_0_SECOND_MAX_STALL_CYCLE_COUNT_MAX  (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT2_0_MAX_STALL_CYCLE_COUNT_MASK     (0xFFFF0000U)
#define CSL_SGU_ATB_FIFO_STAT2_0_MAX_STALL_CYCLE_COUNT_SHIFT    (16U)
#define CSL_SGU_ATB_FIFO_STAT2_0_MAX_STALL_CYCLE_COUNT_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT2_0_MAX_STALL_CYCLE_COUNT_MAX      (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT2_0_RESETVAL                       (0x00000000U)

/* ATB_FIFO_CONTROL_1 */

#define CSL_SGU_ATB_FIFO_CONTROL_1_MONITORING_ENABLE_MASK       (0x00000001U)
#define CSL_SGU_ATB_FIFO_CONTROL_1_MONITORING_ENABLE_SHIFT      (0U)
#define CSL_SGU_ATB_FIFO_CONTROL_1_MONITORING_ENABLE_RESETVAL   (0x00000000U)
#define CSL_SGU_ATB_FIFO_CONTROL_1_MONITORING_ENABLE_MAX        (0x00000001U)

#define CSL_SGU_ATB_FIFO_CONTROL_1_PROGRAMMABLE_THRESHOLD_MASK  (0x0000FF00U)
#define CSL_SGU_ATB_FIFO_CONTROL_1_PROGRAMMABLE_THRESHOLD_SHIFT  (8U)
#define CSL_SGU_ATB_FIFO_CONTROL_1_PROGRAMMABLE_THRESHOLD_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_CONTROL_1_PROGRAMMABLE_THRESHOLD_MAX   (0x000000ffU)

#define CSL_SGU_ATB_FIFO_CONTROL_1_RESETVAL                     (0x00000000U)

/* ATB_FIFO_STAT0_1 */

#define CSL_SGU_ATB_FIFO_STAT0_1_PEAK_FIFO_THRESHOLD_MASK       (0x000000FFU)
#define CSL_SGU_ATB_FIFO_STAT0_1_PEAK_FIFO_THRESHOLD_SHIFT      (0U)
#define CSL_SGU_ATB_FIFO_STAT0_1_PEAK_FIFO_THRESHOLD_RESETVAL   (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT0_1_PEAK_FIFO_THRESHOLD_MAX        (0x000000ffU)

#define CSL_SGU_ATB_FIFO_STAT0_1_RESETVAL                       (0x00000000U)

/* ATB_FIFO_STAT1_1 */

#define CSL_SGU_ATB_FIFO_STAT1_1_SECOND_MAX_COUNT_ABOVE_THRESHOLD_MASK  (0x0000FFFFU)
#define CSL_SGU_ATB_FIFO_STAT1_1_SECOND_MAX_COUNT_ABOVE_THRESHOLD_SHIFT  (0U)
#define CSL_SGU_ATB_FIFO_STAT1_1_SECOND_MAX_COUNT_ABOVE_THRESHOLD_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT1_1_SECOND_MAX_COUNT_ABOVE_THRESHOLD_MAX  (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT1_1_MAX_COUNT_ABOVE_THRESHOLD_MASK  (0xFFFF0000U)
#define CSL_SGU_ATB_FIFO_STAT1_1_MAX_COUNT_ABOVE_THRESHOLD_SHIFT  (16U)
#define CSL_SGU_ATB_FIFO_STAT1_1_MAX_COUNT_ABOVE_THRESHOLD_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT1_1_MAX_COUNT_ABOVE_THRESHOLD_MAX  (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT1_1_RESETVAL                       (0x00000000U)

/* ATB_FIFO_STAT2_1 */

#define CSL_SGU_ATB_FIFO_STAT2_1_SECOND_MAX_STALL_CYCLE_COUNT_MASK  (0x0000FFFFU)
#define CSL_SGU_ATB_FIFO_STAT2_1_SECOND_MAX_STALL_CYCLE_COUNT_SHIFT  (0U)
#define CSL_SGU_ATB_FIFO_STAT2_1_SECOND_MAX_STALL_CYCLE_COUNT_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT2_1_SECOND_MAX_STALL_CYCLE_COUNT_MAX  (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT2_1_MAX_STALL_CYCLE_COUNT_MASK     (0xFFFF0000U)
#define CSL_SGU_ATB_FIFO_STAT2_1_MAX_STALL_CYCLE_COUNT_SHIFT    (16U)
#define CSL_SGU_ATB_FIFO_STAT2_1_MAX_STALL_CYCLE_COUNT_RESETVAL  (0x00000000U)
#define CSL_SGU_ATB_FIFO_STAT2_1_MAX_STALL_CYCLE_COUNT_MAX      (0x0000ffffU)

#define CSL_SGU_ATB_FIFO_STAT2_1_RESETVAL                       (0x00000000U)

#ifdef __cplusplus
}
#endif
#endif