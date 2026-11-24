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
typedef s32 M2C_UNK;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);
extern "C" void fn_03605650(void *, unsigned);

extern "C" M2C_UNK data_102fa808;
extern "C" M2C_UNK data_102fa818;
extern "C" M2C_UNK data_102fa830;

extern "C" void fn_0360be04(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_102fa808;
        M2C_FIELD(arg0, M2C_UNK **, 0xA8) = &data_102fa818;
        M2C_FIELD(arg0, M2C_UNK **, 0xA4) = &data_102fa830;
        fn_030bb614((char *) arg0 + 0x410, 2U);
        fn_03605650(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
