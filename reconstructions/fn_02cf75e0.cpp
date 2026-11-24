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

extern "C" unsigned int fn_02d82148(const void *);
extern "C" bool fn_0370e3bc(void *, int, int);

extern "C" s32 fn_02cf75e0(void **arg0) {
    if ((fn_02d82148(*arg0) != 0) || (fn_0370e3bc(M2C_FIELD(*arg0, void **, 0x394), 0, 0) != 0)) {
        return 1;
    }
    return 0;
}
