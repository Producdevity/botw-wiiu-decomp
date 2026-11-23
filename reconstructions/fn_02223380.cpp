typedef int s32;

extern "C" void fn_02b5bb34(void*);
extern "C" void fn_02b5dab8(void);
extern "C" void fn_02b74ac8(void *);

extern "C" void fn_02223380(void *arg0) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(arg0) + (0)));
    if ((s32) (*(s32 *)((char *)(arg0) + (0x28))) > 0) {
        (*(s32 *)((char *)(arg0) + (0x28))) = 0;
        fn_02b5bb34(temp_r31);
        fn_02b5dab8();
    }
    fn_02b74ac8(temp_r31);
}
