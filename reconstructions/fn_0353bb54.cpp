typedef int s32;
typedef unsigned int u32;

extern "C" void fn_030b0cb8(unsigned int *, const unsigned int *);

extern "C" void fn_0353bb54(void *arg0, u32 *arg1, s32 arg2) {
    void* const* vt1;
    fn_030b0cb8((unsigned int *)((char *)arg0 + 0x18C), arg1);
    ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0x20)))[27])(arg0, arg2);
}
