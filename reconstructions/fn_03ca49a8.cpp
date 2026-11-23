typedef int s32;

extern "C" void fn_03c92f98(void*);
extern "C" void fn_03ca4718(void*);
extern "C" void fn_0434bda8(void*, void*);

extern "C" s32 fn_03ca49a8(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x30)));
    if (temp_r4 != 0) {
        fn_0434bda8((*(void **)((char *)(arg0) + (4))), temp_r4);
        (*(void **)((char *)(arg0) + (0x30))) = 0;
    }
    fn_03c92f98(arg0);
    fn_03ca4718(arg0);
    return 0;
}
