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

extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10093278;

extern "C" void fn_0237a13c(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), M2C_UNK (**)(void *), 0x1C)((char *) arg0 + 0x14);
    fn_037946f0(arg0, M2C_FIELD(arg0, s32 *, 0x14), (s32) *M2C_FIELD(arg0, u8 **, 0x10), 0, 0, data_10093278);
}
