typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_034cc350(int);

extern "C" void fn_032e36f8(s32 *arg0, s32 arg1) {
    s32 temp_r3;

    if (arg0 != 0) {
        temp_r3 = *arg0;
        if (temp_r3 != 0) {
            fn_034cc350(temp_r3);
        }
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
