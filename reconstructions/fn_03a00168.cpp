typedef int s32;

extern "C" void fn_039854c4(void*);

extern "C" s32 fn_03a00168(void **arg0) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != 0) {
        fn_039854c4(temp_r3);
        *arg0 = 0;
    }
    return 1;
}
