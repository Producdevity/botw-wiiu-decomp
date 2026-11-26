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

extern "C" s32 fn_03c758b4(s32 arg0) {
    if (arg0 <= 0) {
        return 0x1388;
    }
    if (arg0 > 0x64) {
        return 0;
    }
    if (arg0 < 0x32) {
        return 0x1388 / arg0;
    }
    return 0xC8 - (arg0 * 2);
}
