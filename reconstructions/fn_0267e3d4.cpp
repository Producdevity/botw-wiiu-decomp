typedef int s32;

extern "C" void fn_0370de48(void*, int);
extern "C" void fn_0370e02c(void*);

extern "C" void fn_0267e3d4(void **arg0) {
    void *temp_r31;
    void *temp_r3;

    temp_r31 = *arg0;
    if ((temp_r31 != 0) && ((s32) (*(s32 *)((char *)(temp_r31) + (0x330))) != 0)) {
        temp_r3 = (*(void **)((char *)(temp_r31) + (0x394)));
        if (temp_r3 != 0) {
            fn_0370e02c(temp_r3);
            fn_0370de48((*(void **)((char *)(temp_r31) + (0x394))), 1);
        }
    }
}
