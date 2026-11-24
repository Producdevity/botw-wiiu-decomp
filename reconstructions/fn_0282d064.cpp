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
#define NULL 0
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;

extern "C" void fn_0281b80c(void*);
extern "C" void fn_0344ba94(void *, const unsigned *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0282d064(void *arg0) {
    u32 sp8;
    void *temp_r3;

    fn_0281b80c(arg0);
    temp_r3 = fn_037966a8(M2C_FIELD(arg0, void **, 0));
    if (temp_r3 != NULL) {
        sp8 = 4;
        fn_0344ba94(temp_r3, &sp8);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), M2C_UNK (**)(void *), 0x15C)(arg0);
}
