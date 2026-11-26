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
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;

extern "C" M2C_UNK fn_0344a6b4(void *, s32);
extern "C" M2C_UNK fn_0344a798(void *, s32, M2C_UNK);

extern "C" void fn_0344a830(void *arg0, s32 arg1) {
    M2C_UNK var_r5;

    var_r5 = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0xE8) >> 0x10U) & 1) {
        fn_0344a6b4(arg0, arg1);
        var_r5 = 1;
    }
    fn_0344a798(arg0, arg1, var_r5);
}
