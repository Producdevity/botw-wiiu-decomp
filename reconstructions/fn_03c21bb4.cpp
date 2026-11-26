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

extern "C" s32 fn_03c21bb4(u32 arg0) {
    s32 var_r0;

    var_r0 = 2;
    switch (arg0) {
    case 1:
        var_r0 = 0;
        break;
    case 2:
        var_r0 = 1;
        break;
    }
    return var_r0;
}
