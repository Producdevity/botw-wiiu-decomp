typedef int s32;

extern "C" int fn_0406ea3c(void*, void*);

extern "C" void fn_034d99b8(void *arg0) {
    void* const* vt1;
    fn_0406ea3c((*(void **)((char *)((*(void **)((char *)(arg0) + (4)))) + (0x5C))), arg0);
    ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0)))[9])(arg0, 3);
}
