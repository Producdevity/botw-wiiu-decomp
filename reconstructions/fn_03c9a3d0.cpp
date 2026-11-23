typedef int s32;

extern "C" void fn_03c96764(void*, void*);
extern "C" void fn_03c98df4(void *);
extern "C" void fn_0434bda8(void*, void*);

extern "C" s32 fn_03c9a3d0(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (4)));
    if (temp_r3 != 0) {
        fn_03c96764(temp_r3, arg1);
        fn_0434bda8(arg1, (*(void **)((char *)(arg0) + (4))));
    }
    fn_03c98df4(arg0);
    return 0;
}
