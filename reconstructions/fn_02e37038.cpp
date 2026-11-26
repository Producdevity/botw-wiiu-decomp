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

extern "C" M2C_UNK fn_0434bff8(void *, s32, M2C_UNK, M2C_UNK);

extern "C" void fn_02e37038(s32 arg0, void *arg1, s32 arg2) {
    if ((arg2 == 0) || ((s32) M2C_FIELD(arg1, u8 *, 0x2E8) != 0)) {
        fn_0434bff8(arg1, arg0 + 0x3C, 0xC0, 0);
    }
}
