typedef int s32;

extern "C" void fn_02e9a1d8(void*);
extern "C" void fn_02ea3e20(void*);
extern "C" void* data_1046bdd8;

extern "C" void fn_02ea3ea0(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x348)));
    if (temp_r3 != 0) {
        fn_02e9a1d8(temp_r3);
    }
    if ((s32) (*(s32 *)((char *)(data_1046bdd8) + (0x40818))) == 5) {
        fn_02ea3e20(arg0);
    }
}
