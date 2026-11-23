typedef signed char s8;
typedef int s32;

extern "C" void fn_033b8e4c(void *arg0, s8 arg1, s32 arg2) {
    void* const* vt1;
    void *temp_r3;

    (*(s8 *)((char *)(arg0) + (0x728))) = arg1;
    if (arg2 != 0) {
        temp_r3 = ((void * (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[325])();
        if (temp_r3 != 0) {
            (*(s8 *)((char *)(temp_r3) + (0x61C))) = arg1;
        }
    }
}
