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

extern "C" void fn_03448a5c(void *, int);
extern "C" M2C_UNK fn_0344a2d0(void *, M2C_UNK *);
extern "C" M2C_UNK fn_0344a2fc(void *, void *);
extern "C" void fn_0344a37c(void *, float);
extern "C" void *fn_037966a8(void *);
extern "C" M2C_UNK data_10549de8;

extern "C" void fn_022cb8e8(void *arg0) {
    void *temp_r3;

    temp_r3 = fn_037966a8(M2C_FIELD(arg0, void **, 0));
    if (temp_r3 != 0) {
        fn_0344a2fc(temp_r3, (char *) arg0 + 0x64);
        fn_0344a37c(temp_r3, M2C_FIELD(arg0, f32 *, 0x74));
        fn_03448a5c(temp_r3, 1);
        fn_0344a2d0(temp_r3, &data_10549de8);
    }
}
