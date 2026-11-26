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

extern "C" s32 fn_029f9b4c(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (arg1 < 7) {
        temp_r3 = arg0 + 0x15F4;
        if ((u32) arg1 < 7U) {
            return temp_r3 + (arg1 * 0x230);
        }
        return temp_r3;
    }
    return 0;
}
