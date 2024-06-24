// Auto-generated file. Do not edit!
//   Template: src/qs8-rsum/ssse3.c.in
//   Generator: tools/xngen
//
// Copyright 2024 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.


#include <assert.h>

#include <immintrin.h>

#include <xnnpack/common.h>
#include <xnnpack/math.h>
#include <xnnpack/reduce.h>

void xnn_qs8_rsum_ukernel__ssse3_u16(
    size_t batch,
    const int8_t* input,
    int32_t* output,
    const union xnn_qs8_rsum_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(batch != 0);
  assert(input != NULL);
  assert(output != NULL);
  assert(params != NULL);

  const __m128i vone = _mm_loadu_si128((const __m128i*) &params->ssse3.onemask_table[0]);
  const __m128i vone_16 = _mm_srli_epi16(vone, 8);
  __m128i vacc0 = _mm_setzero_si128();

  if (XNN_UNLIKELY(batch != 0)) {
    __m128i vacc16_0 = _mm_setzero_si128();
    for (; batch >= 16; batch -= 16) {
      const __m128i vt0 = _mm_maddubs_epi16(vone, _mm_loadu_si128((const __m128i*) input)); input += 16;
      vacc16_0 = _mm_add_epi16(vacc16_0, vt0);
    }
    for (; batch >= 16; batch -= 16) {
      const __m128i vt = _mm_maddubs_epi16(vone, _mm_loadu_si128((const __m128i*) input)); input += 16;
      vacc16_0 = _mm_add_epi16(vacc16_0, vt);
    }
    if (XNN_UNLIKELY(batch != 0)) {
      assert(batch >= 1 && batch <= 15);
      const __m128i vonemask = _mm_loadu_si128((const __m128i*) &params->ssse3.onemask_table[16 - batch]);
      const __m128i vt = _mm_maddubs_epi16(vonemask, _mm_loadu_si128((const __m128i*) input));
      vacc16_0 = _mm_add_epi16(vacc16_0, vt);
    }
    vacc0 = _mm_add_epi32(vacc0, _mm_madd_epi16(vone_16, vacc16_0));
  }

  __m128i vacc_lo = _mm_hadd_epi32(vacc0, vacc0);
  vacc_lo = _mm_hadd_epi32(vacc_lo, vacc_lo);
  const int32_t vacc = _mm_cvtsi128_si32(vacc_lo);

  *output += vacc;
}
