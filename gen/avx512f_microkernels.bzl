"""
Microkernel filenames lists for avx512f.

Auto-generated file. Do not edit!
  Generator: tools/update-microkernels.py
"""

PROD_AVX512F_MICROKERNEL_SRCS = [
    "src/f32-dwconv/gen/f32-dwconv-3p16c-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-4p16c-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-5f5m5l32c16s1r-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-9p16c-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-25p16c-minmax-avx512f.c",
    "src/f32-gemm/gen/f32-gemm-1x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-7x32-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-1x32-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-7x32-minmax-avx512f-broadcast.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr2-p5-u64-acc2.c",
    "src/f32-rdsum/gen/f32-rdsum-7p7x-minmax-avx512f-c64.c",
    "src/f32-rminmax/gen/f32-rmax-avx512f-u64-acc4.c",
    "src/f32-rminmax/gen/f32-rminmax-avx512f-u64-acc4.c",
    "src/f32-rsum/gen/f32-rsum-avx512f-u64-acc4.c",
    "src/f32-vbinary/gen/f32-vadd-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vaddc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vdiv-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vdivc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vmax-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vmaxc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vmin-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vminc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vmul-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vmulc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vprelu-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vpreluc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vrdivc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vrpreluc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vrsubc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vsqrdiff-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vsqrdiffc-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vsub-avx512f-u32.c",
    "src/f32-vbinary/gen/f32-vsubc-avx512f-u32.c",
    "src/f32-vclamp/gen/f32-vclamp-avx512f-u16.c",
    "src/f32-vcmul/gen/f32-vcmul-avx512f-u32.c",
    "src/f32-vcopysign/gen/f32-vcopysign-avx512f.c",
    "src/f32-vcopysign/gen/f32-vcopysignc-avx512f.c",
    "src/f32-vcopysign/gen/f32-vrcopysignc-avx512f.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-p6-u64.c",
    "src/f32-vgelu/gen/f32-vgelu-avx512f-rational-12-10-nr.c",
    "src/f32-vhswish/gen/f32-vhswish-avx512f-u16.c",
    "src/f32-vlog/gen/f32-vlog-avx512f-rational-3-3-div.c",
    "src/f32-vlrelu/gen/f32-vlrelu-avx512f-u16.c",
    "src/f32-vrnd/gen/f32-vrndd-avx512f-u16.c",
    "src/f32-vrnd/gen/f32-vrndne-avx512f-u16.c",
    "src/f32-vrnd/gen/f32-vrndu-avx512f-u16.c",
    "src/f32-vrnd/gen/f32-vrndz-avx512f-u16.c",
    "src/f32-vrsqrt/gen/f32-vrsqrt-avx512f-rsqrt-u32.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-div-u64.c",
    "src/f32-vsqrt/gen/f32-vsqrt-avx512f-rsqrt-u16.c",
    "src/f32-vtanh/gen/f32-vtanh-avx512f-rational-9-8-nr.c",
    "src/f32-vunary/gen/f32-vabs-avx512f.c",
    "src/f32-vunary/gen/f32-vneg-avx512f.c",
    "src/f32-vunary/gen/f32-vsqr-avx512f.c",
    "src/x32-packw/gen/x32-packw-x32-gemm-gio-avx512f-u8.c",
    "src/x32-packw/gen/x32-packw-x32-gemm-goi-avx512f-u4-prfm.c",
]

NON_PROD_AVX512F_MICROKERNEL_SRCS = [
    "src/f32-dwconv/gen/f32-dwconv-3p16c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-3p32c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-3p32c-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-4p16c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-4p32c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-4p32c-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-5f5m5l16c16s1r-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-5f5m5l16c16s1r-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-5f5m5l32c16s1r-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-9p16c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-9p32c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-9p32c-minmax-avx512f.c",
    "src/f32-dwconv/gen/f32-dwconv-25p16c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-25p32c-minmax-avx512f-acc2.c",
    "src/f32-dwconv/gen/f32-dwconv-25p32c-minmax-avx512f.c",
    "src/f32-gemm/gen/f32-gemm-1x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-1x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-4x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-4x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-4x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-5x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-5x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-5x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-6x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-6x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-6x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-7x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-7x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-8x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-8x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-8x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-9x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-9x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-9x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-10x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-10x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-10x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-11x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-11x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-11x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-12x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-12x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-12x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-13x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-13x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-13x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-14x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-14x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-14x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-15x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-15x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-15x64-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-16x16-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-16x32-minmax-avx512f-broadcast.c",
    "src/f32-gemm/gen/f32-gemm-16x64-minmax-avx512f-broadcast.c",
    "src/f32-gemminc/gen/f32-gemminc-1x16-minmax-avx512f-broadcast.c",
    "src/f32-gemminc/gen/f32-gemminc-4x16-minmax-avx512f-broadcast.c",
    "src/f32-gemminc/gen/f32-gemminc-5x16-minmax-avx512f-broadcast.c",
    "src/f32-gemminc/gen/f32-gemminc-6x16-minmax-avx512f-broadcast.c",
    "src/f32-gemminc/gen/f32-gemminc-7x16-minmax-avx512f-broadcast.c",
    "src/f32-gemminc/gen/f32-gemminc-8x16-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-1x16-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-4x16-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-4x32-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-5x16-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-5x32-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-6x16-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-6x32-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-7x16-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-8x16-minmax-avx512f-broadcast.c",
    "src/f32-igemm/gen/f32-igemm-8x32-minmax-avx512f-broadcast.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u64-acc2.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u64-acc4.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u64.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u128-acc2.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u128-acc4.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u128.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u144-acc3.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u144.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u160-acc2.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u160-acc5.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u160.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u192-acc2.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u192-acc3.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u192-acc6.c",
    "src/f32-raddexpminusmax/gen/f32-raddexpminusmax-avx512f-p5-scalef-u192.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u64-acc2.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u64-acc4.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u64.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u128-acc2.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u128-acc4.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u128.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u144-acc3.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u144.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u160-acc2.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u160-acc5.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u160.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u192-acc2.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u192-acc3.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u192-acc6.c",
    "src/f32-raddextexp/gen/f32-raddextexp-avx512f-p5-scalef-u192.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr1-p5-scalef-u16.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr1-p5-scalef-u32-acc2.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr1-p5-scalef-u64-acc2.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr1-p5-scalef-u64-acc4.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr2-p5-u16.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr2-p5-u32-acc2.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-avx512f-rr2-p5-u64-acc4.c",
    "src/f32-rdsum/gen/f32-rdsum-7p7x-minmax-avx512f-c16.c",
    "src/f32-rdsum/gen/f32-rdsum-7p7x-minmax-avx512f-c32.c",
    "src/f32-rdsum/gen/f32-rdsum-7p7x-minmax-avx512f-c128.c",
    "src/f32-rminmax/gen/f32-rmax-avx512f-u16.c",
    "src/f32-rminmax/gen/f32-rmax-avx512f-u32-acc2.c",
    "src/f32-rminmax/gen/f32-rmax-avx512f-u48-acc3.c",
    "src/f32-rminmax/gen/f32-rmax-avx512f-u64-acc2.c",
    "src/f32-rminmax/gen/f32-rmin-avx512f-u16.c",
    "src/f32-rminmax/gen/f32-rmin-avx512f-u32-acc2.c",
    "src/f32-rminmax/gen/f32-rmin-avx512f-u48-acc3.c",
    "src/f32-rminmax/gen/f32-rmin-avx512f-u64-acc2.c",
    "src/f32-rminmax/gen/f32-rmin-avx512f-u64-acc4.c",
    "src/f32-rminmax/gen/f32-rminmax-avx512f-u16.c",
    "src/f32-rminmax/gen/f32-rminmax-avx512f-u32-acc2.c",
    "src/f32-rminmax/gen/f32-rminmax-avx512f-u48-acc3.c",
    "src/f32-rminmax/gen/f32-rminmax-avx512f-u64-acc2.c",
    "src/f32-rsum/gen/f32-rsum-avx512f-u16.c",
    "src/f32-rsum/gen/f32-rsum-avx512f-u32-acc2.c",
    "src/f32-rsum/gen/f32-rsum-avx512f-u48-acc3.c",
    "src/f32-rsum/gen/f32-rsum-avx512f-u64-acc2.c",
    "src/f32-vbinary/gen/f32-vadd-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vaddc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vdiv-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vdivc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vmax-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vmaxc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vmin-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vminc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vmul-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vmulc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vprelu-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vpreluc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vrdivc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vrpreluc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vrsubc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vsqrdiff-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vsqrdiffc-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vsub-avx512f-u16.c",
    "src/f32-vbinary/gen/f32-vsubc-avx512f-u16.c",
    "src/f32-vclamp/gen/f32-vclamp-avx512f-u32.c",
    "src/f32-vcmul/gen/f32-vcmul-avx512f-u16.c",
    "src/f32-vcmul/gen/f32-vcmul-avx512f-u64.c",
    "src/f32-vcmul/gen/f32-vcmul-avx512f-u128.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-lut16-p3-perm-u16.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-lut16-p3-perm-u32.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-lut16-p3-perm-u48.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-lut16-p3-perm-u64.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-p6-u16.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-p6-u32.c",
    "src/f32-velu/gen/f32-velu-avx512f-rr1-p6-u48.c",
    "src/f32-vgelu/gen/f32-vgelu-avx512f-rational-12-10-div.c",
    "src/f32-vhswish/gen/f32-vhswish-avx512f-u32.c",
    "src/f32-vlog/gen/f32-vlog-avx512f-rational-3-3-nr.c",
    "src/f32-vlrelu/gen/f32-vlrelu-avx512f-u32.c",
    "src/f32-vrelu/gen/f32-vrelu-avx512f-u16.c",
    "src/f32-vrelu/gen/f32-vrelu-avx512f-u32.c",
    "src/f32-vrnd/gen/f32-vrndd-avx512f-u32.c",
    "src/f32-vrnd/gen/f32-vrndne-avx512f-u32.c",
    "src/f32-vrnd/gen/f32-vrndu-avx512f-u32.c",
    "src/f32-vrnd/gen/f32-vrndz-avx512f-u32.c",
    "src/f32-vrsqrt/gen/f32-vrsqrt-avx512f-rsqrt-u16.c",
    "src/f32-vrsqrt/gen/f32-vrsqrt-avx512f-rsqrt-u64.c",
    "src/f32-vscaleexpminusmax/gen/f32-vscaleexpminusmax-avx512f-p5-scalef-u16.c",
    "src/f32-vscaleexpminusmax/gen/f32-vscaleexpminusmax-avx512f-p5-scalef-u32.c",
    "src/f32-vscaleexpminusmax/gen/f32-vscaleexpminusmax-avx512f-p5-scalef-u48.c",
    "src/f32-vscaleexpminusmax/gen/f32-vscaleexpminusmax-avx512f-p5-scalef-u64.c",
    "src/f32-vscaleextexp/gen/f32-vscaleextexp-avx512f-p5-scalef-u16.c",
    "src/f32-vscaleextexp/gen/f32-vscaleextexp-avx512f-p5-scalef-u32.c",
    "src/f32-vscaleextexp/gen/f32-vscaleextexp-avx512f-p5-scalef-u48.c",
    "src/f32-vscaleextexp/gen/f32-vscaleextexp-avx512f-p5-scalef-u64.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-div-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-div-u32.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-div-u48.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-div-u64.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-nr1fma-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-nr1fma-u32.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-nr1fma-u48.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-lut16-p3-perm-scalef-nr1fma-u64.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-div-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-div-u32.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-div-u48.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-div-u64.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-nr1fma-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-nr1fma-u32.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-nr1fma-u48.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr1-p5-scalef-nr1fma-u64.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-div-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-div-u32.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-div-u48.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-nr1fma-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-nr1fma-u32.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-nr1fma-u48.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-avx512f-rr2-lut32-p2-perm2-scalef-nr1fma-u64.c",
    "src/f32-vsqrt/gen/f32-vsqrt-avx512f-rsqrt-u32.c",
    "src/f32-vsqrt/gen/f32-vsqrt-avx512f-rsqrt-u48.c",
    "src/f32-vtanh/gen/f32-vtanh-avx512f-rational-9-8-div.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-gio-avx512f-u1-prfm.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-gio-avx512f-u1.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-gio-avx512f-u8-prfm.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-gio-avx512f-u8.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-goi-avx512f-u4-prfm.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-goi-avx512f-u4.c",
    "src/x32-packw/gen/x32-packw-x32-gemm-gio-avx512f-u1-prfm.c",
    "src/x32-packw/gen/x32-packw-x32-gemm-gio-avx512f-u1.c",
    "src/x32-packw/gen/x32-packw-x32-gemm-gio-avx512f-u8-prfm.c",
    "src/x32-packw/gen/x32-packw-x32-gemm-goi-avx512f-u4.c",
]

ALL_AVX512F_MICROKERNEL_SRCS = PROD_AVX512F_MICROKERNEL_SRCS + NON_PROD_AVX512F_MICROKERNEL_SRCS
