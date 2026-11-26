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

extern "C" s32 fn_0294f588(s32);
extern "C" int fn_0378db34(void *);

extern "C" s32 fn_026e3ac0(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    if (((arg3 == 0) && (fn_0294f588(M2C_FIELD(arg0, s32 *, 0)) != 0)) || ((fn_0378db34(arg2) != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32, void *), 0x174)(arg0, arg1, arg2) == 0))) {
        return 1;
    }
    return 0;
}
