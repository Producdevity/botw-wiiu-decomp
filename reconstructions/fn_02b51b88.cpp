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

extern "C" u8 fn_02b51b88(void *arg0) {
    void *temp_r12;

    if ((arg0 == NULL) || (temp_r12 = M2C_FIELD(arg0, void **, 0x3A0), ((temp_r12 == NULL) != 0))) {
        return 0U;
    }
    return (u8) ((((u32) M2C_FIELD(temp_r12, u32 *, 0x10) >> 0x13U) & 1) ^ 1);
}
