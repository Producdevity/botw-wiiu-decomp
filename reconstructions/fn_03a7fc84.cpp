typedef int s32;

extern "C" void fn_03a7fc84(void *arg0, void *arg1) {
    void* const* vt1;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (4)))[7])(arg1);
    (*(s32 *)((char *)(arg0) + (0x9C))) = (s32) (*(s32 *)((char *)(arg1) + (0)));
}
