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

extern "C" M2C_UNK fn_02e14da8(M2C_UNK, M2C_UNK);
extern "C" void fn_0339bd58(void *);
extern "C" void fn_0378da14(void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" M2C_UNK data_101267d8;

extern "C" void fn_0275ec50(void *arg0) {
    fn_0339bd58(M2C_FIELD(arg0, void **, 0));
    M2C_FIELD(arg0, s8 *, 0x40) = 0;
    fn_0378da14((char *) arg0 + 0x24);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), M2C_UNK (**)(void *), 0x1C)((char *) arg0 + 0x24);
    fn_02e14da8(0, 0);
    fn_037b8284(arg0, &data_101267d8, 0);
}
