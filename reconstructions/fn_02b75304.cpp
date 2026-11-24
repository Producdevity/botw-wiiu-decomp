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

extern "C" void* fn_02b62bc8(void *);
extern "C" void* fn_02c1974c(void *, int);
extern "C" int fn_02c19788(void*);

extern "C" void *fn_02b75304(void *arg0) {
    s32 temp_r4;
    void *temp_r3;
    void *var_r31;

    temp_r3 = fn_02b62bc8(arg0);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x50);
        if (temp_r4 >= 0) {
            return fn_02c1974c(arg0, temp_r4);
        }
    }
    var_r31 = NULL;
    if (fn_02c19788(arg0) != 0) {
        var_r31 = fn_02c1974c(arg0, 0);
    }
    return var_r31;
}
