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

extern "C" void fn_03ca2a78(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    if (var_r4 != 0) {
        var_r4 = (s32) M2C_FIELD(arg0, u8 *, 0x42C);
    }
    M2C_FIELD(arg0, u8 *, 0x42C) = (u8) var_r4;
    if (var_r5 != 0) {
        var_r5 = (s32) M2C_FIELD(arg0, u8 *, 0x42D);
    }
    M2C_FIELD(arg0, u8 *, 0x42D) = (u8) var_r5;
    if (var_r6 != 0) {
        var_r6 = (s32) M2C_FIELD(arg0, u8 *, 0x42E);
    }
    M2C_FIELD(arg0, u8 *, 0x42E) = (u8) var_r6;
}
