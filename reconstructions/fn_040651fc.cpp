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

extern "C" void fn_040651ec();

extern "C" void fn_040651fc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, void (**)(), 4) = fn_040651ec;
}
