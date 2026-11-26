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

extern "C" void fn_023da5e4(void *arg0) {
    void *temp_r11;

    if ((s32) M2C_FIELD(arg0, u8 *, 0x41) != 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r11, s32 *, 0x364) = (s32) (M2C_FIELD(temp_r11, s32 *, 0x364) & 0xFFFFFFDF);
    }
}
