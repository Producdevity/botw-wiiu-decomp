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
typedef s32 M2C_UNK;

extern "C" void fn_030ea2cc(void *);
extern "C" s32 fn_035fd78c(s32);
extern "C" s32 fn_035fdcac(s32);
extern "C" s32 data_1047b054;

extern "C" void fn_0244a510(void *arg0) {
    s32 temp_r31;

    temp_r31 = data_1047b054;
    if ((temp_r31 != 0) && (fn_035fd78c(temp_r31) != 0) && (fn_035fdcac(temp_r31) != 0)) {
        fn_030ea2cc(arg0);
    }
}
