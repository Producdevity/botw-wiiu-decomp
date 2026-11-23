typedef int s32;

extern "C" void fn_03840334(void *arg0, void *arg1, s32 arg2) {
    void* const* vt1;
    (*(s32 *)((char *)(arg0) + (0x14))) = ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (0xC)))[31])(arg1);
    (*(void **)((char *)(arg0) + (0x18))) = arg1;
    (*(s32 *)((char *)(arg0) + (0x1C))) = arg2;
}
