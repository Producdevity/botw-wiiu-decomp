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

extern "C" void fn_03124f38(void *arg0, s32 arg1) {
    void *var_r31;

    var_r31 = arg0;
    if (var_r31 != NULL) {
        do {
            M2C_FIELD(M2C_FIELD(var_r31, void **, 0xC), M2C_UNK (**)(void *, s32), 0x14)(var_r31, arg1);
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}
