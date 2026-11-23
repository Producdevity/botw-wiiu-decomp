typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03464014(void*, int);

extern "C" void fn_0203d7d4(void *arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (4)));
        if (temp_r3 != 0) {
            fn_03464014(temp_r3, 3);
        }
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
