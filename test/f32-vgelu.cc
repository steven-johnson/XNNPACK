// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-vgelu.yaml
//   Generator: tools/generate-vunary-test.py


#include <array>
#include <cmath>
#include <cstddef>
#include <limits>

#include <gtest/gtest.h>
#include "xnnpack.h"
#include "xnnpack/common.h"
#include "xnnpack/isa-checks.h"
#include "xnnpack/microparams-init.h"
#include "xnnpack/microparams.h"
#include "xnnpack/vunary.h"
#include "vunary-microkernel-tester.h"


TEST(F32_VGELU__SCALAR_U1, batch_eq_1) {
  VUnaryMicrokernelTester()
    .batch_size(1)
    .TestGelu(xnn_f32_vgelu_ukernel__scalar_u1);
}

TEST(F32_VGELU__SCALAR_U1, batch_gt_1) {
  for (size_t batch_size = 1 + 1; batch_size < 10; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u1);
  }
}

TEST(F32_VGELU__SCALAR_U1, inplace) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u1);
  }
}

TEST(F32_VGELU__SCALAR_U1, special_values) {
  constexpr size_t num_elements = 3;
  constexpr size_t buffered_size =
      num_elements + XNN_EXTRA_BYTES / sizeof(float);
  std::array<float, buffered_size> inputs =
      {-6.0f, 6.0f, 0.0f};
  std::array<float, num_elements> expected =
      {0.0f, 6.0f, 0.0f};
  std::array<float, buffered_size> outputs;
  xnn_f32_vgelu_ukernel__scalar_u1(
      num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < num_elements; i++) {
    if (std::isfinite(expected[i])) {
      EXPECT_NEAR(
          expected[i], outputs[i],
          1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i] << " and output " << outputs[i]
          << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
          << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
          << ", FP_ZERO=" << FP_ZERO << ")";
    }
  }
}

TEST(F32_VGELU__SCALAR_U2, batch_eq_2) {
  VUnaryMicrokernelTester()
    .batch_size(2)
    .TestGelu(xnn_f32_vgelu_ukernel__scalar_u2);
}

TEST(F32_VGELU__SCALAR_U2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u2);
  }
}

TEST(F32_VGELU__SCALAR_U2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u2);
  }
}

TEST(F32_VGELU__SCALAR_U2, batch_gt_2) {
  for (size_t batch_size = 2 + 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u2);
  }
}

TEST(F32_VGELU__SCALAR_U2, inplace) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u2);
  }
}

TEST(F32_VGELU__SCALAR_U2, special_values) {
  constexpr size_t num_elements = 3;
  constexpr size_t buffered_size =
      num_elements + XNN_EXTRA_BYTES / sizeof(float);
  std::array<float, buffered_size> inputs =
      {-6.0f, 6.0f, 0.0f};
  std::array<float, num_elements> expected =
      {0.0f, 6.0f, 0.0f};
  std::array<float, buffered_size> outputs;
  xnn_f32_vgelu_ukernel__scalar_u2(
      num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < num_elements; i++) {
    if (std::isfinite(expected[i])) {
      EXPECT_NEAR(
          expected[i], outputs[i],
          1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i] << " and output " << outputs[i]
          << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
          << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
          << ", FP_ZERO=" << FP_ZERO << ")";
    }
  }
}

TEST(F32_VGELU__SCALAR_U4, batch_eq_4) {
  VUnaryMicrokernelTester()
    .batch_size(4)
    .TestGelu(xnn_f32_vgelu_ukernel__scalar_u4);
}

TEST(F32_VGELU__SCALAR_U4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u4);
  }
}

TEST(F32_VGELU__SCALAR_U4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u4);
  }
}

TEST(F32_VGELU__SCALAR_U4, batch_gt_4) {
  for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u4);
  }
}

TEST(F32_VGELU__SCALAR_U4, inplace) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_u4);
  }
}

TEST(F32_VGELU__SCALAR_U4, special_values) {
  constexpr size_t num_elements = 3;
  constexpr size_t buffered_size =
      num_elements + XNN_EXTRA_BYTES / sizeof(float);
  std::array<float, buffered_size> inputs =
      {-6.0f, 6.0f, 0.0f};
  std::array<float, num_elements> expected =
      {0.0f, 6.0f, 0.0f};
  std::array<float, buffered_size> outputs;
  xnn_f32_vgelu_ukernel__scalar_u4(
      num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < num_elements; i++) {
    if (std::isfinite(expected[i])) {
      EXPECT_NEAR(
          expected[i], outputs[i],
          1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i] << " and output " << outputs[i]
          << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
          << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
          << ", FP_ZERO=" << FP_ZERO << ")";
    }
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U1, batch_eq_1) {
  VUnaryMicrokernelTester()
    .batch_size(1)
    .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u1);
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U1, batch_gt_1) {
  for (size_t batch_size = 1 + 1; batch_size < 10; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u1);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U1, inplace) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u1);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U1, special_values) {
  constexpr size_t num_elements = 3;
  constexpr size_t buffered_size =
      num_elements + XNN_EXTRA_BYTES / sizeof(float);
  std::array<float, buffered_size> inputs =
      {-6.0f, 6.0f, 0.0f};
  std::array<float, num_elements> expected =
      {0.0f, 6.0f, 0.0f};
  std::array<float, buffered_size> outputs;
  xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u1(
      num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < num_elements; i++) {
    if (std::isfinite(expected[i])) {
      EXPECT_NEAR(
          expected[i], outputs[i],
          1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i] << " and output " << outputs[i]
          << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
          << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
          << ", FP_ZERO=" << FP_ZERO << ")";
    }
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U2, batch_eq_2) {
  VUnaryMicrokernelTester()
    .batch_size(2)
    .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u2);
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u2);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u2);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U2, batch_gt_2) {
  for (size_t batch_size = 2 + 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u2);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U2, inplace) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u2);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U2, special_values) {
  constexpr size_t num_elements = 3;
  constexpr size_t buffered_size =
      num_elements + XNN_EXTRA_BYTES / sizeof(float);
  std::array<float, buffered_size> inputs =
      {-6.0f, 6.0f, 0.0f};
  std::array<float, num_elements> expected =
      {0.0f, 6.0f, 0.0f};
  std::array<float, buffered_size> outputs;
  xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u2(
      num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < num_elements; i++) {
    if (std::isfinite(expected[i])) {
      EXPECT_NEAR(
          expected[i], outputs[i],
          1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i] << " and output " << outputs[i]
          << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
          << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
          << ", FP_ZERO=" << FP_ZERO << ")";
    }
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U4, batch_eq_4) {
  VUnaryMicrokernelTester()
    .batch_size(4)
    .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u4);
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u4);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u4);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U4, batch_gt_4) {
  for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u4);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U4, inplace) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u4);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U4, special_values) {
  constexpr size_t num_elements = 3;
  constexpr size_t buffered_size =
      num_elements + XNN_EXTRA_BYTES / sizeof(float);
  std::array<float, buffered_size> inputs =
      {-6.0f, 6.0f, 0.0f};
  std::array<float, num_elements> expected =
      {0.0f, 6.0f, 0.0f};
  std::array<float, buffered_size> outputs;
  xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u4(
      num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < num_elements; i++) {
    if (std::isfinite(expected[i])) {
      EXPECT_NEAR(
          expected[i], outputs[i],
          1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i] << " and output " << outputs[i]
          << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
          << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
          << ", FP_ZERO=" << FP_ZERO << ")";
    }
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U8, batch_eq_8) {
  VUnaryMicrokernelTester()
    .batch_size(8)
    .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u8);
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U8, batch_div_8) {
  for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u8);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U8, batch_lt_8) {
  for (size_t batch_size = 1; batch_size < 8; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u8);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U8, batch_gt_8) {
  for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u8);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U8, inplace) {
  for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .TestGelu(xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u8);
  }
}

TEST(F32_VGELU__SCALAR_RATIONAL_10_8_DIV_U8, special_values) {
  constexpr size_t num_elements = 3;
  constexpr size_t buffered_size =
      num_elements + XNN_EXTRA_BYTES / sizeof(float);
  std::array<float, buffered_size> inputs =
      {-6.0f, 6.0f, 0.0f};
  std::array<float, num_elements> expected =
      {0.0f, 6.0f, 0.0f};
  std::array<float, buffered_size> outputs;
  xnn_f32_vgelu_ukernel__scalar_rational_10_8_div_u8(
      num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < num_elements; i++) {
    if (std::isfinite(expected[i])) {
      EXPECT_NEAR(
          expected[i], outputs[i],
          1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i] << " and output " << outputs[i]
          << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
          << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
          << ", FP_ZERO=" << FP_ZERO << ")";
    }
  }
}

#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u4);
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U4, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U4, special_values) {
    TEST_REQUIRES_X86_SSE2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u4(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u8);
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U8, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U8, special_values) {
    TEST_REQUIRES_X86_SSE2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u8(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U12, batch_eq_12) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u12);
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U12, batch_div_12) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 24; batch_size < 120; batch_size += 12) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U12, batch_lt_12) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 12; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U12, batch_gt_12) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 12 + 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U12, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 60; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U12, special_values) {
    TEST_REQUIRES_X86_SSE2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u12(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u16);
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U16, inplace) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__SSE2_RATIONAL_10_8_DIV_U16, special_values) {
    TEST_REQUIRES_X86_SSE2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__sse2_rational_10_8_div_u16(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u8);
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U8, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U8, special_values) {
    TEST_REQUIRES_X86_AVX2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u8(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u16);
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U16, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U16, special_values) {
    TEST_REQUIRES_X86_AVX2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u16(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u24);
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 24 + 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U24, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U24, special_values) {
    TEST_REQUIRES_X86_AVX2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u24(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX2;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u32);
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U32, inplace) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX2_RATIONAL_10_8_DIV_U32, special_values) {
    TEST_REQUIRES_X86_AVX2;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx2_rational_10_8_div_u32(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U8, batch_eq_8) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u8);
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U8, batch_div_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U8, batch_lt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U8, batch_gt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U8, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U8, special_values) {
    TEST_REQUIRES_X86_FMA3;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u8(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U16, batch_eq_16) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u16);
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U16, batch_div_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U16, batch_lt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U16, batch_gt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U16, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U16, special_values) {
    TEST_REQUIRES_X86_FMA3;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u16(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U24, batch_eq_24) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u24);
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U24, batch_div_24) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U24, batch_lt_24) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U24, batch_gt_24) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 24 + 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U24, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u24);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U24, special_values) {
    TEST_REQUIRES_X86_FMA3;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u24(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U32, batch_eq_32) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u32);
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U32, batch_div_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U32, batch_lt_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U32, batch_gt_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U32, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__FMA3_RATIONAL_10_8_DIV_U32, special_values) {
    TEST_REQUIRES_X86_FMA3;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__fma3_rational_10_8_div_u32(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u16);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U16, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u16(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u32);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U32, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u32(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u48);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 96; batch_size < 480; batch_size += 48) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 48 + 1; batch_size < 96; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U48, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 240; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U48, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u48(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u64);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 128; batch_size < 640; batch_size += 64) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64 + 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U64, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_DIV_U64, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_div_u64(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u16);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u16);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U16, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u16(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u32);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u32);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U32, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u32(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u48);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 96; batch_size < 480; batch_size += 48) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 48 + 1; batch_size < 96; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U48, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 240; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u48);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U48, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u48(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u64);
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 128; batch_size < 640; batch_size += 64) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64 + 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U64, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u64);
    }
  }

  TEST(F32_VGELU__AVX512F_RATIONAL_10_8_NR_U64, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__avx512f_rational_10_8_nr_u64(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u4);
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U4, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U4, special_values) {
    TEST_REQUIRES_ARM_NEON;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u4(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u8);
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U8, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U8, special_values) {
    TEST_REQUIRES_ARM_NEON;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u8(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U12, batch_eq_12) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u12);
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U12, batch_div_12) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 24; batch_size < 120; batch_size += 12) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U12, batch_lt_12) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 12; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U12, batch_gt_12) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 12 + 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U12, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 60; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U12, special_values) {
    TEST_REQUIRES_ARM_NEON;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u12(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u16);
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U16, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__NEON_RATIONAL_10_8_DIV_U16, special_values) {
    TEST_REQUIRES_ARM_NEON;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__neon_rational_10_8_div_u16(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ENABLE_HVX && XNN_ARCH_HEXAGON
  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U32, batch_eq_32) {
    TEST_REQUIRES_HVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u32);
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U32, batch_div_32) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U32, batch_lt_32) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U32, batch_gt_32) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U32, inplace) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u32);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U32, special_values) {
    TEST_REQUIRES_HVX;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u32(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ENABLE_HVX && XNN_ARCH_HEXAGON


#if XNN_ENABLE_HVX && XNN_ARCH_HEXAGON
  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U64, batch_eq_64) {
    TEST_REQUIRES_HVX;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u64);
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U64, batch_div_64) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 128; batch_size < 640; batch_size += 64) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U64, batch_lt_64) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U64, batch_gt_64) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 64 + 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U64, inplace) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u64);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U64, special_values) {
    TEST_REQUIRES_HVX;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u64(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ENABLE_HVX && XNN_ARCH_HEXAGON


#if XNN_ENABLE_HVX && XNN_ARCH_HEXAGON
  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U128, batch_eq_128) {
    TEST_REQUIRES_HVX;
    VUnaryMicrokernelTester()
      .batch_size(128)
      .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u128);
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U128, batch_div_128) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 256; batch_size < 1280; batch_size += 128) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u128);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U128, batch_lt_128) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u128);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U128, batch_gt_128) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 128 + 1; batch_size < 256; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u128);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U128, inplace) {
    TEST_REQUIRES_HVX;
    for (size_t batch_size = 1; batch_size <= 640; batch_size += 127) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u128);
    }
  }

  TEST(F32_VGELU__HVX_RATIONAL_10_8_DIV_U128, special_values) {
    TEST_REQUIRES_HVX;
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__hvx_rational_10_8_div_u128(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ENABLE_HVX && XNN_ARCH_HEXAGON


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u4);
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U4, batch_div_4) {
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U4, batch_lt_4) {
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U4, batch_gt_4) {
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U4, inplace) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u4);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U4, special_values) {
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u4(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u8);
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U8, batch_div_8) {
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U8, batch_lt_8) {
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U8, batch_gt_8) {
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U8, inplace) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u8);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U8, special_values) {
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u8(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U12, batch_eq_12) {
    VUnaryMicrokernelTester()
      .batch_size(12)
      .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u12);
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U12, batch_div_12) {
    for (size_t batch_size = 24; batch_size < 120; batch_size += 12) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U12, batch_lt_12) {
    for (size_t batch_size = 1; batch_size < 12; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U12, batch_gt_12) {
    for (size_t batch_size = 12 + 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U12, inplace) {
    for (size_t batch_size = 1; batch_size <= 60; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u12);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U12, special_values) {
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u12(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u16);
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U16, batch_div_16) {
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U16, batch_lt_16) {
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U16, batch_gt_16) {
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U16, inplace) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .TestGelu(xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u16);
    }
  }

  TEST(F32_VGELU__WASMSIMD_RATIONAL_10_8_DIV_U16, special_values) {
    constexpr size_t num_elements = 3;
    constexpr size_t buffered_size =
        num_elements + XNN_EXTRA_BYTES / sizeof(float);
    std::array<float, buffered_size> inputs =
        {-6.0f, 6.0f, 0.0f};
    std::array<float, num_elements> expected =
        {0.0f, 6.0f, 0.0f};
    std::array<float, buffered_size> outputs;
    xnn_f32_vgelu_ukernel__wasmsimd_rational_10_8_div_u16(
        num_elements * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < num_elements; i++) {
      if (std::isfinite(expected[i])) {
        EXPECT_NEAR(
            expected[i], outputs[i],
            1 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        EXPECT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i] << " and output " << outputs[i]
            << " (FP_INFINITE=" << FP_INFINITE << ", FP_NAN=" << FP_NAN
            << ", FP_NORMAL=" << FP_NORMAL << ", FP_SUBNORMAL=" << FP_SUBNORMAL
            << ", FP_ZERO=" << FP_ZERO << ")";
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
