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

extern "C" void fn_04129ba0(void*, void*, void*, void*);
extern "C" void fn_04157ff0(void*);
extern "C" void fn_04158488(void);

extern "C" u8 data_105c9af4;

extern "C" s32 fn_04121b54(void *arg0, void *arg1, void *arg2, void *arg3) {
    if ((s32) data_105c9af4 == 0) {
        fn_04158488();
        fn_04157ff0(&data_105c9af4);
        if ((s32) data_105c9af4 == 0) {
            return 0;
        }
    }
    fn_04129ba0(arg0, arg1, arg2, arg3);
    return 1;
}
