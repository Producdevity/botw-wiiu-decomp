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

extern "C" s32 fn_039952b0(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (arg0 <= 1) {
        var_r4 = (s32) (var_r4 + 1) / 2;
    }
    return var_r4 + 1;
}
