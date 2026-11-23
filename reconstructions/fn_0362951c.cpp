typedef int s32;

extern "C" void fn_03629450(void*);
extern "C" void fn_036294a4(void*);
extern "C" void fn_037d81a0(void*);

extern "C" void fn_0362951c(void *arg0) {
    void *temp_r3;

    if ((s32) (*(s32 *)((char *)(arg0) + (0x10))) != 0) {
        fn_03629450(arg0);
        temp_r3 = (*(void **)((char *)(arg0) + (0xC)));
        if (temp_r3 != 0) {
            fn_037d81a0(temp_r3);
        }
        fn_036294a4(arg0);
    }
}
