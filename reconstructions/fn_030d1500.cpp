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

extern "C" void fn_030b94c0(void*, int);

extern "C" void fn_030d1500(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = arg1;
    if (var_r31 > 0) {
        do {
            fn_030b94c0(arg0, 9);
            var_r31 -= 1;
        } while (var_r31 != 0);
    }
}
