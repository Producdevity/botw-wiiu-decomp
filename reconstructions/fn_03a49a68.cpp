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
#define NULL 0
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" void* fn_0308e578(unsigned);
extern "C" void* fn_03c49164(void *, int, int, int);
extern "C" unsigned char data_1035e5a8[];

extern "C" void *fn_03a49a68(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != NULL) || (var_r31 = fn_0308e578(0xA4U), ((var_r31 == NULL) == 0))) {
        fn_03c49164(var_r31, arg1, arg2, arg3);
        M2C_FIELD(var_r31, u8 **, 8) = data_1035e5a8;
    }
    return var_r31;
}
