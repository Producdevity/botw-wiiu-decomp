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

extern "C" void fn_037970d4(void*, void*);
extern "C" void fn_03797a04(void *, int, void *, void *);

extern "C" void fn_0227eee4(void **arg0) {
    u8 *temp_r3_2;
    void *temp_r3;

    temp_r3 = *arg0;
    temp_r3_2 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 0xE8), u8 *(**)(void *), 0x43C)(temp_r3);
    if ((temp_r3_2 != NULL) && ((s32) *temp_r3_2 == 0)) {
        fn_037970d4(*arg0, NULL);
        return;
    }
    fn_03797a04(*arg0, 4, NULL, NULL);
}
