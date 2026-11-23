typedef int s32;

extern "C" void fn_03ca1dd0(void*);
extern "C" void fn_0434bda8(void*, void*);

extern "C" s32 fn_03ca32b4(void *arg0, void *arg1) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x408)));
    if (temp_r4 != 0) {
        fn_0434bda8(arg1, temp_r4);
    }
    fn_03ca1dd0(arg0);
    return 0;
}
