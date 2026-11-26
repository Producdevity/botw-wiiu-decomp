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

extern "C" f32 data_103c522c;

extern "C" f32 fn_03b7e8e0(s32 arg0, f32 farg0, f32 farg1, f32 farg2) {
    if (arg0 == 0) {
        return data_103c522c;
    }
    return (farg1 * farg2) + farg0;
}
