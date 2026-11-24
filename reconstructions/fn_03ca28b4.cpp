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

extern "C" void fn_03ca28b4(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    switch (arg3) {
    case 1:
        if (((s32) M2C_FIELD(arg0, u8 *, 0x47C) == 0xFF) || (arg1 == 0xFF)) {
            M2C_FIELD(arg0, u8 *, 0x47C) = (u8) arg1;
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x470) == -1) || (arg2 == -1)) {
            M2C_FIELD(arg0, s32 *, 0x470) = arg2;
            return;
        }
        return;
    case 2:
        if (((s32) M2C_FIELD(arg0, u8 *, 0x47D) == 0xFF) || (arg1 == 0xFF)) {
            M2C_FIELD(arg0, u8 *, 0x47D) = (u8) arg1;
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x474) == -1) || (arg2 == -1)) {
            M2C_FIELD(arg0, s32 *, 0x474) = arg2;
            return;
        }
        break;
    case 3:
        if (((s32) M2C_FIELD(arg0, u8 *, 0x47E) == 0xFF) || (arg1 == 0xFF)) {
            M2C_FIELD(arg0, u8 *, 0x47E) = (u8) arg1;
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x478) == -1) || (arg2 == -1)) {
            M2C_FIELD(arg0, s32 *, 0x478) = arg2;
            return;
        }
        break;
    }
}
