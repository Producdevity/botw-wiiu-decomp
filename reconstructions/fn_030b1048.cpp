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

#include "botw/ghs_varargs.h"

extern "C" int fn_030b0fd4(s32, s32, const char *, GhsArgumentList *);

extern "C" int fn_030b1048(void *string, const char *format, GhsArgumentList *arguments) {
    return fn_030b0fd4(M2C_FIELD(string, s32 *, 0), M2C_FIELD(string, s32 *, 8), format, arguments);
}
