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

extern "C" void fn_03cafe18(void *arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 1:
        M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x40) = arg2;
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x44) = arg2;
        return;
    }
}
