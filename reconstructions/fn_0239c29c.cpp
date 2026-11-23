typedef int s32;

extern "C" void fn_0339a080(void *);
extern "C" void fn_0339a0c4(void *);

extern "C" s32 fn_0239c29c(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0)));
    if ((s32) *(*(s32 **)((char *)(arg0) + (0x14))) == 0) {
        fn_0339a0c4(temp_r3);
        return 1;
    }
    fn_0339a080(temp_r3);
    return 1;
}
