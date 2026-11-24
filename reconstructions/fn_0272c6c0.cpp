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

extern "C" void fn_02b27414(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" M2C_UNK data_1011f0d0;

extern "C" void fn_0272c6c0(void *arg0, void *arg1) {
    s32 *temp_r3_2;
    s32 var_r11;
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, u8 *, 0x1B4) == 0) {
        fn_02b27414((char *) arg0 + 0x3C);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    temp_r3_2 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 0xE8), s32 *(**)(void *), 0x2BC)(temp_r3);
    var_r11 = 1;
    if (temp_r3_2 != NULL) {
        var_r11 = *temp_r3_2;
    }
    M2C_FIELD(arg0, s32 *, 0x1B0) = var_r11;
    fn_037b8284(arg0, &data_1011f0d0, arg1);
}
