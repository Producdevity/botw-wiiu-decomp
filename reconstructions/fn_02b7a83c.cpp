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

extern "C" int fn_0315bce4(void*, void*, void*);

extern "C" s32 fn_02b7a83c(void *arg0, void *arg1) {
    s32 *sp8;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x390);
    if (temp_r3 != NULL) {
        sp8 = NULL;
        if (fn_0315bce4(temp_r3, &sp8, arg1) != 0) {
            return *sp8;
        }
    }
    return 0;
}
