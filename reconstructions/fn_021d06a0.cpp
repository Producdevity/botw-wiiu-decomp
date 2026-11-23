typedef int s32;

extern "C" int fn_021d0590(void*);

extern "C" void fn_021d06a0(void *arg0) {
    void* const* vt1;
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(arg0) + (0xC)));
    ((s32 (*)(void *, s32))(vt1 = *(void* const**)&(temp_r31))[65])(arg0, fn_021d0590(arg0));
}
