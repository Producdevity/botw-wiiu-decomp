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

extern "C" int fn_031f6990(void*);
extern "C" void fn_0378dc60(int, int);

extern "C" s32 data_1046407c;

extern "C" void fn_02bafa84(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, u8 *, 0x217) == 0) {
        fn_0378dc60(arg1, data_1046407c + 0x74);
        return;
    }
    fn_0378dc60(arg1, fn_031f6990(M2C_FIELD(arg0, void **, 0)));
}
