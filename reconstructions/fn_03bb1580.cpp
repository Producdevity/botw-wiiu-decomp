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

extern "C" void *data_1047f05c;

extern "C" void *fn_03bb1580(void) {
    if ((void *) data_1047f05c != NULL) {
        return M2C_FIELD(data_1047f05c, void **, 0x38);
    }
    return data_1047f05c;
}
