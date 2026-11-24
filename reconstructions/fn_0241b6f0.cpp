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

extern "C" void fn_0241be5c(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_0241b6f0(void *arg0) {
    fn_0241be5c(arg0);
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *), 0x2C)(arg0) == 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *), 0x24)(arg0) == 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *), 0x134)(arg0) != 0)) {
        fn_030ea2cc(arg0);
    }
}
