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

extern "C" void fn_0308e6d4(void *);

extern "C" void fn_0397da40(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s32 (**)(void *), 0x8C)((char *) arg0 + 0x5C) != 0) {
        fn_0308e6d4(M2C_FIELD(arg0, void **, 0x68));
        M2C_FIELD(arg0, s8 *, 0x70) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
