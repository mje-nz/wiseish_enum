#define WISE_ENUM_IMPL_ARG_N(                                                           \
    _1, _2, _3, _4, _5, _6, _7, _8, _9, _10,                                            \
    _11, _12, _13, _14, _15, _16, _17, _18, _19, _20,                                   \
    _21, _22, _23, _24, _25, _26, _27, _28, _29, _30,                                   \
    _31, _32, _33, _34, _35, _36, _37, _38, _39, _40,                                   \
    _41, _42, _43, _44, _45, _46, _47, _48, _49, _50,                                   \
    _51, _52, _53, _54, _55, _56, _57, _58, _59, _60,                                   \
    _61, _62, _63, _64, _65, _66, _67, _68, _69, _70,                                   \
    _71, _72, _73, _74, _75, _76, _77, _78, _79, _80,                                   \
    _81, _82, _83, _84, _85, _86, _87, _88, _89, _90,                                   \
    _91, _92, _93, _94, _95, _96, _97, _98, _99, _100,                                  \
    _101, _102, _103, _104, _105, _106, _107, _108, _109, _110,                         \
    _111, _112, _113, _114, _115, _116, _117, _118, _119, _120,                         \
    _121, _122, _123, _124, _125, _126, _127, _128, _129, _130,                         \
    _131, _132, _133, _134, _135, _136, _137, _138, _139, _140,                         \
    _141, _142, _143, _144, _145, _146, _147, _148, _149, _150,                         \
    _151, _152, _153, _154, _155, _156, _157, _158, _159, _160,                         \
    _161, _162, _163, _164, _165, _166, _167, _168, _169, _170,                         \
    _171, _172, _173, _174, _175, _176, _177, _178, _179, _180,                         \
    _181, _182, _183, _184, _185, _186, _187, _188, _189, _190,                         \
    _191, _192, _193, _194, _195, _196, _197, _198, _199, _200,                         \
    _201, _202, _203, _204, _205, _206, _207, _208, _209, _210,                         \
    _211, _212, _213, _214, _215, _216, _217, _218, _219, _220,                         \
    _221, _222, _223, _224, _225, _226, _227, _228, _229, _230,                         \
    _231, _232, _233, _234, _235, _236, _237, _238, _239, _240,                         \
    _241, _242, _243, _244, _245, _246, _247, _248, _249, _250,                         \
    _251, _252, _253, _254, _255, _256, N, ...                                          \
  )                                                                                     \
  N                                                                                     \

#define WISE_ENUM_IMPL_RSEQ_N()                                                         \
  256, 255, 254, 253, 252, 251, 250, 249, 248, 247,                                     \
  246, 245, 244, 243, 242, 241, 240, 239, 238, 237,                                     \
  236, 235, 234, 233, 232, 231, 230, 229, 228, 227,                                     \
  226, 225, 224, 223, 222, 221, 220, 219, 218, 217,                                     \
  216, 215, 214, 213, 212, 211, 210, 209, 208, 207,                                     \
  206, 205, 204, 203, 202, 201, 200, 199, 198, 197,                                     \
  196, 195, 194, 193, 192, 191, 190, 189, 188, 187,                                     \
  186, 185, 184, 183, 182, 181, 180, 179, 178, 177,                                     \
  176, 175, 174, 173, 172, 171, 170, 169, 168, 167,                                     \
  166, 165, 164, 163, 162, 161, 160, 159, 158, 157,                                     \
  156, 155, 154, 153, 152, 151, 150, 149, 148, 147,                                     \
  146, 145, 144, 143, 142, 141, 140, 139, 138, 137,                                     \
  136, 135, 134, 133, 132, 131, 130, 129, 128, 127,                                     \
  126, 125, 124, 123, 122, 121, 120, 119, 118, 117,                                     \
  116, 115, 114, 113, 112, 111, 110, 109, 108, 107,                                     \
  106, 105, 104, 103, 102, 101, 100, 99, 98, 97,                                        \
  96, 95, 94, 93, 92, 91, 90, 89, 88, 87,                                               \
  86, 85, 84, 83, 82, 81, 80, 79, 78, 77,                                               \
  76, 75, 74, 73, 72, 71, 70, 69, 68, 67,                                               \
  66, 65, 64, 63, 62, 61, 60, 59, 58, 57,                                               \
  56, 55, 54, 53, 52, 51, 50, 49, 48, 47,                                               \
  46, 45, 44, 43, 42, 41, 40, 39, 38, 37,                                               \
  36, 35, 34, 33, 32, 31, 30, 29, 28, 27,                                               \
  26, 25, 24, 23, 22, 21, 20, 19, 18, 17,                                               \
  16, 15, 14, 13, 12, 11, 10, 9, 8, 7,                                                  \
  6, 5, 4, 3, 2, 1, 0                                                                   \

#define WISE_ENUM_IMPL_LOOP_1(M, D, x) M(x)

#define WISE_ENUM_IMPL_LOOP_2(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_1(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_3(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_2(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_4(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_3(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_5(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_4(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_6(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_5(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_7(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_6(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_8(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_7(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_9(M, D, x, ...) M(x) D()                                    \
  WISE_ENUM_IMPL_LOOP_8(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_10(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_9(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_11(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_10(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_12(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_11(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_13(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_12(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_14(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_13(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_15(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_14(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_16(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_15(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_17(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_16(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_18(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_17(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_19(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_18(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_20(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_19(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_21(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_20(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_22(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_21(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_23(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_22(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_24(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_23(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_25(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_24(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_26(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_25(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_27(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_26(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_28(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_27(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_29(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_28(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_30(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_29(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_31(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_30(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_32(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_31(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_33(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_32(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_34(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_33(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_35(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_34(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_36(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_35(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_37(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_36(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_38(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_37(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_39(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_38(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_40(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_39(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_41(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_40(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_42(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_41(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_43(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_42(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_44(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_43(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_45(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_44(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_46(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_45(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_47(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_46(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_48(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_47(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_49(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_48(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_50(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_49(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_51(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_50(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_52(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_51(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_53(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_52(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_54(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_53(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_55(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_54(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_56(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_55(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_57(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_56(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_58(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_57(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_59(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_58(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_60(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_59(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_61(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_60(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_62(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_61(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_63(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_62(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_64(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_63(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_65(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_64(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_66(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_65(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_67(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_66(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_68(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_67(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_69(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_68(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_70(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_69(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_71(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_70(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_72(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_71(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_73(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_72(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_74(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_73(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_75(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_74(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_76(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_75(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_77(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_76(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_78(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_77(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_79(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_78(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_80(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_79(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_81(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_80(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_82(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_81(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_83(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_82(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_84(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_83(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_85(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_84(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_86(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_85(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_87(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_86(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_88(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_87(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_89(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_88(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_90(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_89(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_91(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_90(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_92(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_91(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_93(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_92(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_94(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_93(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_95(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_94(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_96(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_95(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_97(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_96(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_98(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_97(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_99(M, D, x, ...) M(x) D()                                   \
  WISE_ENUM_IMPL_LOOP_98(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_100(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_99(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_101(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_100(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_102(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_101(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_103(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_102(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_104(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_103(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_105(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_104(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_106(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_105(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_107(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_106(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_108(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_107(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_109(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_108(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_110(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_109(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_111(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_110(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_112(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_111(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_113(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_112(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_114(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_113(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_115(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_114(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_116(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_115(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_117(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_116(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_118(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_117(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_119(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_118(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_120(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_119(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_121(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_120(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_122(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_121(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_123(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_122(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_124(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_123(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_125(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_124(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_126(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_125(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_127(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_126(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_128(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_127(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_129(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_128(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_130(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_129(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_131(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_130(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_132(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_131(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_133(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_132(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_134(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_133(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_135(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_134(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_136(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_135(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_137(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_136(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_138(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_137(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_139(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_138(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_140(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_139(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_141(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_140(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_142(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_141(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_143(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_142(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_144(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_143(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_145(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_144(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_146(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_145(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_147(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_146(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_148(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_147(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_149(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_148(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_150(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_149(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_151(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_150(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_152(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_151(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_153(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_152(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_154(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_153(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_155(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_154(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_156(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_155(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_157(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_156(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_158(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_157(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_159(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_158(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_160(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_159(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_161(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_160(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_162(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_161(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_163(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_162(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_164(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_163(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_165(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_164(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_166(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_165(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_167(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_166(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_168(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_167(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_169(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_168(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_170(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_169(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_171(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_170(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_172(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_171(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_173(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_172(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_174(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_173(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_175(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_174(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_176(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_175(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_177(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_176(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_178(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_177(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_179(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_178(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_180(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_179(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_181(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_180(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_182(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_181(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_183(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_182(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_184(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_183(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_185(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_184(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_186(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_185(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_187(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_186(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_188(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_187(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_189(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_188(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_190(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_189(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_191(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_190(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_192(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_191(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_193(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_192(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_194(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_193(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_195(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_194(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_196(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_195(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_197(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_196(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_198(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_197(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_199(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_198(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_200(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_199(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_201(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_200(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_202(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_201(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_203(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_202(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_204(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_203(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_205(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_204(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_206(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_205(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_207(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_206(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_208(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_207(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_209(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_208(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_210(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_209(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_211(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_210(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_212(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_211(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_213(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_212(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_214(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_213(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_215(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_214(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_216(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_215(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_217(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_216(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_218(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_217(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_219(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_218(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_220(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_219(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_221(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_220(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_222(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_221(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_223(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_222(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_224(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_223(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_225(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_224(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_226(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_225(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_227(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_226(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_228(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_227(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_229(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_228(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_230(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_229(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_231(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_230(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_232(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_231(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_233(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_232(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_234(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_233(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_235(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_234(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_236(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_235(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_237(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_236(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_238(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_237(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_239(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_238(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_240(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_239(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_241(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_240(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_242(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_241(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_243(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_242(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_244(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_243(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_245(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_244(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_246(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_245(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_247(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_246(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_248(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_247(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_249(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_248(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_250(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_249(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_251(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_250(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_252(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_251(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_253(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_252(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_254(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_253(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_255(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_254(M, D, __VA_ARGS__)

#define WISE_ENUM_IMPL_LOOP_256(M, D, x, ...) M(x) D()                                  \
  WISE_ENUM_IMPL_LOOP_255(M, D, __VA_ARGS__)

