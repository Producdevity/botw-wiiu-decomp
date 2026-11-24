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

extern "C" int fn_03942768(void*);

extern "C" void fn_03942a38(void *arg0) {
    void *temp_r29;
    void *temp_r30;

    temp_r29 = M2C_FIELD(arg0, void **, 0x88);
    temp_r30 = M2C_FIELD(arg0, void **, 0x84);
    fn_03942768(arg0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), M2C_UNK (**)(void *, M2C_UNK), 0x1C)(arg0, 3);
    M2C_FIELD(M2C_FIELD(temp_r29, void **, 0xC), M2C_UNK (**)(void *), 0x24)(temp_r29);
    M2C_FIELD(M2C_FIELD(temp_r30, void **, 0xC), M2C_UNK (**)(void *), 0x24)(temp_r30);
}
