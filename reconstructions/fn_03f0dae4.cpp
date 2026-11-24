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

extern "C" void* fn_03f0b8ac(void*);

extern "C" s32 fn_03f0dae4(s32 *arg0) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = M2C_FIELD(fn_03f0b8ac(arg0), s16 *, 0xC);
    var_r3 = -1;
    if (temp_r0 != -1) {
        var_r3 = M2C_FIELD((*arg0 + (temp_r0 * 0x10)), s32 *, 8);
    }
    return var_r3;
}
