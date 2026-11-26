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

extern "C" M2C_UNK data_10549fec;

extern "C" M2C_UNK *fn_03badae0(void *arg0) {
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(arg0, M2C_UNK **, 0xCC);
    if (temp_r3 == NULL) {
        return &data_10549fec;
    }
    return temp_r3;
}
