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
typedef s32 M2C_UNK;

extern "C" void fn_0378da14(void *);
extern "C" bool fn_0378da88(void *);
extern "C" void fn_0378dc60(int, int);

extern "C" void fn_029aa1a8(void *arg0) {
    char *var_r31;

    if (fn_0378da88((char *) arg0 + 0x24) != 0) {
        var_r31 = (char *) arg0 + 0x30;
        if ((fn_0378da88(var_r31) == 0) || (var_r31 = (char *) arg0 + 0x3C, fn_0378da88(var_r31) == 0)) {
            fn_0378dc60((int) var_r31, (int) arg0 + 0x24);
        }
        fn_0378da14((char *) arg0 + 0x24);
    }
}
