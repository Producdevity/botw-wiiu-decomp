// First-pass m2c draft from the local original. A guess to edit until `check` matches; not evidence of types or intent.
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;

extern "C" s32 fn_03c916ac(s32 arg0) {
    s32 var_r12;

    var_r12 = 0;
    if (arg0 & 1) {
        var_r12 = 0xA0000;
    }
    if (arg0 & 2) {
        var_r12 += 0x120000;
    }
    return (0 - var_r12) + 0x01980000;
}
