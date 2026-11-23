typedef int s32;

extern "C" void fn_03c92f98(void*);
extern "C" void fn_03cc6cec(void*);
extern "C" void fn_0434bda8(void*, void*);

extern "C" s32 fn_03cc71fc(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x34)));
    if (temp_r4 != 0) {
        fn_0434bda8((*(void **)((char *)(arg0) + (4))), temp_r4);
    }
    fn_03c92f98(arg0);
    fn_03cc6cec(arg0);
    return 0;
}
