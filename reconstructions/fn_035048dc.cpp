typedef int s32;

extern "C" void fn_0350e33c(void*);

extern "C" void fn_035048dc(void *arg0) {
    void *temp_r12;

    fn_0350e33c(arg0);
    temp_r12 = (*(void **)((char *)(arg0) + (0x24)));
    if (temp_r12 != 0) {
        (*(s32 *)((char *)(temp_r12) + (0x2C0))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x2C0))) | 0x400);
    }
}
