typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02fc7ef0(void*, void*);
extern "C" int fn_02fc7f9c(void*, int);
extern "C" void fn_02fc830c(void*, int);

extern "C" void fn_02fc83a0(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_02fc7ef0(arg0, 0);
    if ((s8) (*(u8 *)((char *)(arg0) + (0x1C0C))) == 0) {
        if (((temp_r3 == 2) || (temp_r3 == 3)) && ((fn_02fc7f9c(arg0, 2) != 0) || (fn_02fc7f9c(arg0, 3) != 0))) {
            fn_02fc830c(arg0, 1);
        }
    } else if ((temp_r3 == 0) || (temp_r3 == 1)) {
        fn_02fc830c(arg0, 0);
    }
}
