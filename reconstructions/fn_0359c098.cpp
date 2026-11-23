typedef int s32;

extern "C" void fn_03b9fc80(void*);

extern "C" s32 fn_0359c098(void *arg0) {
    void *temp_r12;
    void *temp_r3;

    temp_r12 = (*(void **)((char *)(arg0) + (0x398)));
    if (temp_r12 != 0) {
        temp_r3 = (*(void **)((char *)(temp_r12) + (0x44)));
        if (temp_r3 != 0) {
            fn_03b9fc80(temp_r3);
            return 1;
        }
    }
    return 0;
}
