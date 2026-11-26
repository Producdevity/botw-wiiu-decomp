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

extern "C" M2C_UNK data_10556238;

extern "C" void fn_03554730(f32 farg0) {
    M2C_FIELD(&data_10556238, s8 *, 0xC) = 1;
    M2C_FIELD(&data_10556238, f32 *, 8) = farg0;
}
