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

extern "C" u8 fn_03bad66c(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, u16 *, 0xAE))) {
        return 0U;
    }
    return M2C_FIELD((s8 *) arg0 + arg1, u8 *, 0xB0);
}
