// Auto-generated file. Do not edit!
//   Template: src/f32-qc4w-gemm/avx512-broadcast.c.in
//   Generator: tools/xngen
//
// Copyright 2023 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include <xnnpack/gemm.h>
#include <xnnpack/intrinsics-polyfill.h>


void xnn_f32_qc4w_gemm_minmax_ukernel_2x32__avx512skx_broadcast(
    size_t mr,
    size_t nc,
    size_t kc,
    const float* restrict a,
    size_t a_stride,
    const void* restrict w,
    float* restrict c,
    size_t cm_stride,
    size_t cn_stride,
    const union xnn_f32_qc4w_minmax_params params[restrict XNN_MIN_ELEMENTS(1)])
{
  assert(mr != 0);
  assert(mr <= 2);
  assert(nc != 0);
  assert(kc != 0);
  assert(kc % sizeof(float) == 0);
  assert(a != NULL);
  assert(w != NULL);
  assert(c != NULL);

  const float* a0 = a;
  float* c0 = c;
  const float* a1 = (const float*) ((uintptr_t) a0 + a_stride);
  float* c1 = (float*) ((uintptr_t) c0 + cm_stride);
  if XNN_UNPREDICTABLE(mr != 2) {
    a1 = a0;
    c1 = c0;
  }
  const __m512i vkernel_zero_point = _mm512_set1_epi32(params->avx.kernel_zero_point);
  const __m512i vmask = _mm512_set1_epi32(params->avx.mask);

  do {
    __m512 vacc0x0123456789ABCDEF = _mm512_loadu_ps((const float*) w + 0);
    __m512 vacc0xGHIJKLMNOPQRSTUV = _mm512_loadu_ps((const float*) w + 16);
    __m512 vacc1x0123456789ABCDEF = vacc0x0123456789ABCDEF;
    __m512 vacc1xGHIJKLMNOPQRSTUV = vacc0xGHIJKLMNOPQRSTUV;
    w = (const float*) w + 32;

    size_t k = kc;
    for (; k >= 2 * sizeof(float); k -= sizeof(float) * 2) {
      const __m512 va0c0 = _mm512_set1_ps(*a0);
      a0 += 1;
      const __m512 va1c0 = _mm512_set1_ps(*a1);
      a1 += 1;
      const __m512 va0c1 = _mm512_set1_ps(*a0);
      a0 += 1;
      const __m512 va1c1 = _mm512_set1_ps(*a1);
      a1 += 1;

      const __m512i vbi0123456789ABCDEFc01 = _mm512_cvtepu8_epi32(_mm_lddqu_si128((const void *) ((const int8_t*) w + 0)));
      const __m512i vbiGHIJKLMNOPQRSTUVc01 = _mm512_cvtepu8_epi32(_mm_lddqu_si128((const void *) ((const int8_t*) w + 16)));
      w = (const int8_t*) w + 32;

      const __m512i vbm0123456789ABCDEFc0 =  _mm512_and_si512(vbi0123456789ABCDEFc01, vmask);
      const __m512i vbmGHIJKLMNOPQRSTUVc0 =  _mm512_and_si512(vbiGHIJKLMNOPQRSTUVc01, vmask);
      const __m512i vbm0123456789ABCDEFc1 =  _mm512_srli_epi32(vbi0123456789ABCDEFc01, 4);
      const __m512i vbmGHIJKLMNOPQRSTUVc1 =  _mm512_srli_epi32(vbiGHIJKLMNOPQRSTUVc01, 4);
      const __m512i vbi0123456789ABCDEFc0 = _mm512_sub_epi32(vbm0123456789ABCDEFc0, vkernel_zero_point);
      const __m512i vbiGHIJKLMNOPQRSTUVc0 = _mm512_sub_epi32(vbmGHIJKLMNOPQRSTUVc0, vkernel_zero_point);
      const __m512i vbi0123456789ABCDEFc1 = _mm512_sub_epi32(vbm0123456789ABCDEFc1, vkernel_zero_point);
      const __m512i vbiGHIJKLMNOPQRSTUVc1 = _mm512_sub_epi32(vbmGHIJKLMNOPQRSTUVc1, vkernel_zero_point);
      const __m512 vb0123456789ABCDEFc0 = _mm512_cvtepi32_ps(vbi0123456789ABCDEFc0);
      const __m512 vbGHIJKLMNOPQRSTUVc0 = _mm512_cvtepi32_ps(vbiGHIJKLMNOPQRSTUVc0);
      const __m512 vb0123456789ABCDEFc1 = _mm512_cvtepi32_ps(vbi0123456789ABCDEFc1);
      const __m512 vbGHIJKLMNOPQRSTUVc1 = _mm512_cvtepi32_ps(vbiGHIJKLMNOPQRSTUVc1);

      vacc0x0123456789ABCDEF = _mm512_fmadd_ps(va0c0, vb0123456789ABCDEFc0, vacc0x0123456789ABCDEF);
      vacc1x0123456789ABCDEF = _mm512_fmadd_ps(va1c0, vb0123456789ABCDEFc0, vacc1x0123456789ABCDEF);
      vacc0xGHIJKLMNOPQRSTUV = _mm512_fmadd_ps(va0c0, vbGHIJKLMNOPQRSTUVc0, vacc0xGHIJKLMNOPQRSTUV);
      vacc1xGHIJKLMNOPQRSTUV = _mm512_fmadd_ps(va1c0, vbGHIJKLMNOPQRSTUVc0, vacc1xGHIJKLMNOPQRSTUV);
      vacc0x0123456789ABCDEF = _mm512_fmadd_ps(va0c1, vb0123456789ABCDEFc1, vacc0x0123456789ABCDEF);
      vacc1x0123456789ABCDEF = _mm512_fmadd_ps(va1c1, vb0123456789ABCDEFc1, vacc1x0123456789ABCDEF);
      vacc0xGHIJKLMNOPQRSTUV = _mm512_fmadd_ps(va0c1, vbGHIJKLMNOPQRSTUVc1, vacc0xGHIJKLMNOPQRSTUV);
      vacc1xGHIJKLMNOPQRSTUV = _mm512_fmadd_ps(va1c1, vbGHIJKLMNOPQRSTUVc1, vacc1xGHIJKLMNOPQRSTUV);
    }

    if XNN_UNLIKELY(k != 0) {
      const __m512 va0 = _mm512_set1_ps(*a0);
      a0 += 1;
      const __m512 va1 = _mm512_set1_ps(*a1);
      a1 += 1;

      const __m512i vbi0123456789ABCDEFc01 = _mm512_cvtepu8_epi32(_mm_lddqu_si128((const void *) ((const int8_t*) w + 0)));
      const __m512i vbiGHIJKLMNOPQRSTUVc01 = _mm512_cvtepu8_epi32(_mm_lddqu_si128((const void *) ((const int8_t*) w + 16)));
      w = (const int8_t*) w + 32;

      const __m512i vbi0123456789ABCDEF = _mm512_sub_epi32(vbi0123456789ABCDEFc01, vkernel_zero_point);
      const __m512i vbiGHIJKLMNOPQRSTUV = _mm512_sub_epi32(vbiGHIJKLMNOPQRSTUVc01, vkernel_zero_point);
      const __m512 vb0123456789ABCDEF = _mm512_cvtepi32_ps(vbi0123456789ABCDEF);
      const __m512 vbGHIJKLMNOPQRSTUV = _mm512_cvtepi32_ps(vbiGHIJKLMNOPQRSTUV);

      vacc0x0123456789ABCDEF = _mm512_fmadd_ps(va0, vb0123456789ABCDEF, vacc0x0123456789ABCDEF);
      vacc1x0123456789ABCDEF = _mm512_fmadd_ps(va1, vb0123456789ABCDEF, vacc1x0123456789ABCDEF);
      vacc0xGHIJKLMNOPQRSTUV = _mm512_fmadd_ps(va0, vbGHIJKLMNOPQRSTUV, vacc0xGHIJKLMNOPQRSTUV);
      vacc1xGHIJKLMNOPQRSTUV = _mm512_fmadd_ps(va1, vbGHIJKLMNOPQRSTUV, vacc1xGHIJKLMNOPQRSTUV);
    }

    const __m512 vscale0123456789ABCDEF = _mm512_loadu_ps((const float*) w + 0);
    vacc0x0123456789ABCDEF = _mm512_mul_ps(vacc0x0123456789ABCDEF, vscale0123456789ABCDEF);
    vacc1x0123456789ABCDEF = _mm512_mul_ps(vacc1x0123456789ABCDEF, vscale0123456789ABCDEF);
    const __m512 vscaleGHIJKLMNOPQRSTUV = _mm512_loadu_ps((const float*) w + 16);
    vacc0xGHIJKLMNOPQRSTUV = _mm512_mul_ps(vacc0xGHIJKLMNOPQRSTUV, vscaleGHIJKLMNOPQRSTUV);
    vacc1xGHIJKLMNOPQRSTUV = _mm512_mul_ps(vacc1xGHIJKLMNOPQRSTUV, vscaleGHIJKLMNOPQRSTUV);
    w = (const float*) w + 32;
    const __m512 vmin = _mm512_set1_ps(params->scalar.min);
    vacc0x0123456789ABCDEF = _mm512_max_ps(vmin, vacc0x0123456789ABCDEF);
    vacc1x0123456789ABCDEF = _mm512_max_ps(vmin, vacc1x0123456789ABCDEF);
    vacc0xGHIJKLMNOPQRSTUV = _mm512_max_ps(vmin, vacc0xGHIJKLMNOPQRSTUV);
    vacc1xGHIJKLMNOPQRSTUV = _mm512_max_ps(vmin, vacc1xGHIJKLMNOPQRSTUV);

    const __m512 vmax = _mm512_set1_ps(params->scalar.max);
    vacc0x0123456789ABCDEF = _mm512_min_ps(vmax, vacc0x0123456789ABCDEF);
    vacc1x0123456789ABCDEF = _mm512_min_ps(vmax, vacc1x0123456789ABCDEF);
    vacc0xGHIJKLMNOPQRSTUV = _mm512_min_ps(vmax, vacc0xGHIJKLMNOPQRSTUV);
    vacc1xGHIJKLMNOPQRSTUV = _mm512_min_ps(vmax, vacc1xGHIJKLMNOPQRSTUV);

    if XNN_LIKELY(nc >= 32) {
      _mm512_storeu_ps(c1, vacc1x0123456789ABCDEF);
      _mm512_storeu_ps(c1 + 16, vacc1xGHIJKLMNOPQRSTUV);
      c1 = (float*) ((uintptr_t) c1 + cn_stride);
      _mm512_storeu_ps(c0, vacc0x0123456789ABCDEF);
      _mm512_storeu_ps(c0 + 16, vacc0xGHIJKLMNOPQRSTUV);
      c0 = (float*) ((uintptr_t) c0 + cn_stride);

      a1 = (const float*) ((uintptr_t) a1 - kc);
      a0 = (const float*) ((uintptr_t) a0 - kc);

      nc -= 32;
    } else {
      if (nc & 16) {
        _mm512_storeu_ps(c1, vacc1x0123456789ABCDEF);
        _mm512_storeu_ps(c0, vacc0x0123456789ABCDEF);

        vacc1x0123456789ABCDEF = vacc1xGHIJKLMNOPQRSTUV;
        vacc0x0123456789ABCDEF = vacc0xGHIJKLMNOPQRSTUV;

        c1 += 16;
        c0 += 16;
      }
      if (nc & 15) {
        // Prepare mask for valid 32-bit elements (depends on nc).
        const __mmask16 vmask = _cvtu32_mask16((uint16_t) ((uint32_t) (UINT32_C(1) << (nc & 15)) - UINT32_C(1)));
        _mm512_mask_storeu_ps(c1, vmask, vacc1x0123456789ABCDEF);
        _mm512_mask_storeu_ps(c0, vmask, vacc0x0123456789ABCDEF);
      }
      nc = 0;
    }
  } while (nc != 0);
}
