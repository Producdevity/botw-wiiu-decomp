typedef int s32;

extern "C" void fn_0370d910(void*, void*, void*, int);
extern "C" void fn_0370e02c(void*);

extern "C" void fn_025f7144(void *arg0) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(arg0) + (0)));
    if ((temp_r31 != 0) && ((s32) (*(s32 *)((char *)(temp_r31) + (0x330))) != 0)) {
        fn_0370d910((*(void **)((char *)(temp_r31) + (0x394))), *(*(void ***)((char *)(arg0) + (0x24))), 0, 1);
        fn_0370e02c((*(void **)((char *)(temp_r31) + (0x394))));
    }
}
