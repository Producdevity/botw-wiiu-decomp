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

extern "C" void fn_02b1cbe0(int, int, int);

extern "C" s32 data_10463c60;

extern "C" void fn_0256e68c(void) {
    if ((s32) data_10463c60 != 0) {
        fn_02b1cbe0(data_10463c60, 0, 1);
        fn_02b1cbe0(data_10463c60, 1, 1);
    }
}
