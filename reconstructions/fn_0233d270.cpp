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

extern "C" s32 fn_0233d270(void **arg0) {
    void *temp_r12;

    temp_r12 = *arg0;
    M2C_FIELD(temp_r12, u16 *, 0x4A6) = (u16) (M2C_FIELD(temp_r12, u16 *, 0x4A6) | 2);
    return 1;
}
