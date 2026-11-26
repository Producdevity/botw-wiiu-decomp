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

extern "C" s32 fn_03cab8e8(void *arg0, s32 *arg1, s32 *arg2) {
    if ((arg1 == NULL) || (arg2 == NULL)) {
        return 0xFF676984;
    }
    *arg1 = M2C_FIELD(arg0, s32 *, 0x78);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x7C);
    return 0;
}
