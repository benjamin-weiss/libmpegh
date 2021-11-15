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

#include <impeghd_type_def.h>
#include "ia_core_coder_bitbuffer.h"
#include "ia_core_coder_interface.h"
#include "ia_core_coder_info.h"

/**
 * @defgroup CoreDecROM Core Decoder ROM Tables
 * @ingroup  CoreDecROM
 * @brief Core Decoder ROM Tables
 *
 * @{
 */

const WORD16 ia_core_coder_book_scl_code_book[122] = {
    0x0013, 0x0781, 0x0763, 0x07a4, 0x0744, 0x07c4, 0x0725, 0x07e5, 0x0706, 0x0806, 0x06e6,
    0x0826, 0x0847, 0x06c7, 0x0867, 0x06a8, 0x0888, 0x0688, 0x08a8, 0x0668, 0x08c9, 0x0649,
    0x0629, 0x08e9, 0x090a, 0x060a, 0x092a, 0x05ea, 0x094a, 0x05ca, 0x098b, 0x096b, 0x09ab,
    0x09cb, 0x05ab, 0x056b, 0x058c, 0x09ec, 0x054c, 0x052c, 0x0a0c, 0x050c, 0x0a2d, 0x04ed,
    0x0a4d, 0x04cd, 0x0a6d, 0x04ae, 0x046e, 0x0aae, 0x042e, 0x048e, 0x044e, 0x0a8e, 0x040e,
    0x0aef, 0x0b2f, 0x03cf, 0x03ef, 0x0ad0, 0x03b0, 0x0350, 0x0370, 0x0390, 0x0310, 0x0b10,
    0x0331, 0x02d1, 0x02f1, 0x0b52, 0x02b2, 0x0272, 0x0072, 0x0032, 0x0052, 0x0012, 0x0c53,
    0x0c73, 0x0c93, 0x0cb3, 0x0cd3, 0x0eb3, 0x0c33, 0x0b73, 0x0b93, 0x0bb3, 0x0bd3, 0x0bf3,
    0x0c13, 0x0d13, 0x0df3, 0x0e13, 0x0e33, 0x0e53, 0x0e73, 0x0e93, 0x0dd3, 0x0d33, 0x0d53,
    0x0d73, 0x0d93, 0x0db3, 0x0ed3, 0x00d3, 0x0113, 0x0133, 0x0153, 0x00b3, 0x0cf3, 0x0f13,
    0x0ef3, 0x0093, 0x00f3, 0x01f3, 0x0213, 0x0253, 0x0293, 0x0233, 0x0173, 0x0193, 0x01d3,
    0x01b3};

const WORD32 ia_core_coder_book_scl_index[33] = {
    0x00000000, 0x10100004, 0x2040000c, 0x00a0003b, 0x30d0007a, 0x412000fa, 0x516001f9,
    0x61c003f9, 0x722007f9, 0x82800ff9, 0x92d01ff8, 0xa3503ff9, 0xb400fff6, 0xc431fff0,
    0x0687ffef, 0x0707fff7, 0x0747fffb, 0x0767fffd, 0x0777fffe, 0x0787ffff, 0x0030000b,
    0x0060001b, 0x00f000f7, 0x014001f7, 0x01a003f7, 0x020007f7, 0x02600ff7, 0x02c01ff7,
    0x03303ff7, 0x03907ff7, 0x0421ffef, 0x14a3ffe8, 0x0587ffdf};

const ia_huff_code_word_struct ia_core_coder_book_scl_huff_code_word[] = {
    {60, 1, 0},        {59, 3, 4},        {61, 4, 10},       {58, 4, 11},       {62, 4, 12},
    {57, 5, 26},       {63, 5, 27},       {56, 6, 56},       {64, 6, 57},       {55, 6, 58},
    {65, 6, 59},       {66, 7, 120},      {54, 7, 121},      {67, 7, 122},      {53, 8, 246},
    {68, 8, 247},      {52, 8, 248},      {69, 8, 249},      {51, 8, 250},      {70, 9, 502},
    {50, 9, 503},      {49, 9, 504},      {71, 9, 505},      {72, 10, 1012},    {48, 10, 1013},
    {73, 10, 1014},    {47, 10, 1015},    {74, 10, 1016},    {46, 10, 1017},    {76, 11, 2036},
    {75, 11, 2037},    {77, 11, 2038},    {78, 11, 2039},    {45, 11, 2040},    {43, 11, 2041},
    {44, 12, 4084},    {79, 12, 4085},    {42, 12, 4086},    {41, 12, 4087},    {80, 12, 4088},
    {40, 12, 4089},    {81, 13, 8180},    {39, 13, 8181},    {82, 13, 8182},    {38, 13, 8183},
    {83, 13, 8184},    {37, 14, 16370},   {35, 14, 16371},   {85, 14, 16372},   {33, 14, 16373},
    {36, 14, 16374},   {34, 14, 16375},   {84, 14, 16376},   {32, 14, 16377},   {87, 15, 32756},
    {89, 15, 32757},   {30, 15, 32758},   {31, 15, 32759},   {86, 16, 65520},   {29, 16, 65521},
    {26, 16, 65522},   {27, 16, 65523},   {28, 16, 65524},   {24, 16, 65525},   {88, 16, 65526},
    {25, 17, 131054},  {22, 17, 131055},  {23, 17, 131056},  {90, 18, 262114},  {21, 18, 262115},
    {19, 18, 262116},  {3, 18, 262117},   {1, 18, 262118},   {2, 18, 262119},   {0, 18, 262120},
    {98, 19, 524242},  {99, 19, 524243},  {100, 19, 524244}, {101, 19, 524245}, {102, 19, 524246},
    {117, 19, 524247}, {97, 19, 524248},  {91, 19, 524249},  {92, 19, 524250},  {93, 19, 524251},
    {94, 19, 524252},  {95, 19, 524253},  {96, 19, 524254},  {104, 19, 524255}, {111, 19, 524256},
    {112, 19, 524257}, {113, 19, 524258}, {114, 19, 524259}, {115, 19, 524260}, {116, 19, 524261},
    {110, 19, 524262}, {105, 19, 524263}, {106, 19, 524264}, {107, 19, 524265}, {108, 19, 524266},
    {109, 19, 524267}, {118, 19, 524268}, {6, 19, 524269},   {8, 19, 524270},   {9, 19, 524271},
    {10, 19, 524272},  {5, 19, 524273},   {103, 19, 524274}, {120, 19, 524275}, {119, 19, 524276},
    {4, 19, 524277},   {7, 19, 524278},   {15, 19, 524279},  {16, 19, 524280},  {18, 19, 524281},
    {20, 19, 524282},  {17, 19, 524283},  {11, 19, 524284},  {12, 19, 524285},  {14, 19, 524286},
    {13, 19, 524287}};
/** @} */ /* End of CoreDecROM */