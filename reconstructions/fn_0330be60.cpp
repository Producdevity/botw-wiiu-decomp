typedef int s32;

extern "C" void fn_03308924(void);

extern "C" void fn_0330be60(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    if (arg0 != 0) {
        temp_r3 = ((void * (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[263])();
        if ((temp_r3 != 0) && ((s32) (*(s32 *)((char *)(temp_r3) + (0x104))) == 1)) {
            fn_03308924();
        }
    }
}
