typedef signed char s8;

extern "C" void fn_0211bd20(void*);
extern "C" void fn_0344bac4(void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0208bc3c(void *arg0) {
    void *temp_r3;

    fn_0211bd20(arg0);
    (*(s8 *)((char *)(arg0) + (0xD4))) = 0;
    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        fn_0344bac4(temp_r3);
    }
}
