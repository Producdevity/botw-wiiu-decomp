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

extern "C" void fn_030ea2e0(void *);
extern "C" void fn_03471628(void *);

extern "C" void fn_0299f54c(void **arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(*arg0, void **, 0xE8), void *(**)(void *), 0x16C)(*arg0);
    if (temp_r3 == 0) {
        fn_030ea2e0(arg0);
        return;
    }
    fn_03471628(temp_r3);
}
