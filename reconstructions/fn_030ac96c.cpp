typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0308e6d4(void *);

extern "C" void fn_030ac96c(void *arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0x1C)));
        if (temp_r3 != 0) {
            fn_0308e6d4(temp_r3);
        }
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
