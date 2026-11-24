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

extern "C" void fn_03205fbc(int, int);
extern "C" void fn_034dbf80(void*);

extern "C" s32 data_1046d5b0;

extern "C" void fn_034dc010(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u8 *, 0x60) != 0) {
        fn_03205fbc(data_1046d5b0, (s32) ((char *) arg0 + 0xB8));
        fn_034dbf80(arg0);
        M2C_FIELD(arg0, u8 *, 0x60) = 0U;
    }
}
