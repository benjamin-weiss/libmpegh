/* 	Copyright (c) [2020]-[2021] Ittiam Systems Pvt. Ltd.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted (subject to the limitations in the
   disclaimer below) provided that the following conditions are met:
   •	Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
   •	Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
   •	Neither the names of Dolby Laboratories, Inc. (or its affiliates),
   Ittiam Systems Pvt. Ltd. nor the names of its contributors may be used
   to endorse or promote products derived from this software without
   specific prior written permission.

   NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED
   BY THIS LICENSE. YOUR USE OF THE SOFTWARE MAY REQUIRE ADDITIONAL PATENT
   LICENSE(S) BY THIRD PARTIES, INCLUDING, WITHOUT LIMITATION, DOLBY
   LABORATORIES, INC. OR ANY OF ITS AFFILIATES. THIS SOFTWARE IS PROVIDED
   BY ITTIAM SYSTEMS LTD. AND ITS CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
   OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
   IN NO EVENT SHALL ITTIAM SYSTEMS LTD OR ITS CONTRIBUTORS BE LIABLE FOR
   ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
   OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------
*/

#ifndef _IA_CORE_CODER_FUNCTION_SELECTOR_H_
#define _IA_CORE_CODER_FUNCTION_SELECTOR_H_

#include <stdio.h>
#include <string.h>
#include <impeghd_type_def.h>

#include <ia_core_coder_constants.h>
#include "ia_core_coder_intrinsics.h"
#include "ia_core_coder_bitbuffer.h"
#include "ia_core_coder_defines.h"
#include <ia_core_coder_interface.h>
#include <ia_core_coder_info.h>
#include <ia_core_coder_rom.h>
#include "ia_core_coder_cnst.h"
#include "ia_core_coder_channelinfo.h"
#include "ia_core_coder_env_extr.h"

extern VOID (*ia_core_coder_calc_pre_twid)(FLOAT32 *ptr_x, FLOAT32 *r_ptr, FLOAT32 *i_ptr,
                                           WORD32 nlength, WORD16 transform_kernel_type,
                                           const FLOAT32 *cos_ptr, const FLOAT32 *sin_ptr);

extern VOID (*ia_core_coder_calc_post_twid)(FLOAT32 *ptr_x, FLOAT32 *r_ptr, FLOAT32 *i_ptr,
                                            WORD32 nlength, WORD16 transform_kernel_type,
                                            const FLOAT32 *cos_ptr, const FLOAT32 *sin_ptr);

#endif /* _IA_CORE_CODER_FUNCTION_SELECTOR_H_ */
