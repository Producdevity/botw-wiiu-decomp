typedef int s32;

extern "C" s32 fn_0383a3b4(void *arg0, s32 arg1) {
    void* const* vt1;
    void *temp_r31;

    temp_r31 = (void *)((*(s32 *)((char *)(arg0) + (0x15C))) + (arg1 * 0x4C));
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r31) + (4)))[7])(temp_r31);
    return (*(s32 *)((char *)(temp_r31) + (0)));
}
