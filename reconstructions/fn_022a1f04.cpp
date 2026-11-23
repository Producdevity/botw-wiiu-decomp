typedef signed char s8;
typedef int s32;

extern "C" void fn_02344914(void*, void*);

extern "C" void fn_022a1f04(void *arg0, void *arg1) {
    void* const* vt1;
    fn_02344914(arg0, arg1);
    (*(s8 *)((char *)(arg0) + (0x28))) = 0;
    ((s32 (*)(void *, void *))(vt1 = *(void* const**)((char *)(arg0) + (0x2C)))[17])((char *)arg0 + 0x24, arg1);
}
