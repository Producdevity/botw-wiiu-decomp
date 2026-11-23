typedef int s32;

extern "C" void fn_03ba9428(void*, void*);

extern "C" void fn_03babee0(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0xD0)));
    if (temp_r3 != 0) {
        if (((s32) (*(s32 *)((char *)(arg0) + (0x178))) != 0) || ((s32) (*(s32 *)((char *)(arg0) + (0x174))) != 0)) {
            fn_03ba9428(temp_r3, arg0);
        }
        (*(void **)((char *)(arg0) + (0xD0))) = 0;
    }
}
