typedef signed char s8;
typedef int s32;

extern "C" void fn_020ebafc(void*, void*);

extern "C" void fn_0207b204(void *arg0, void *arg1) {
    void* const* vt1;
    fn_020ebafc(arg0, arg1);
    (*(s8 *)((char *)(arg0) + (0x74))) = 0;
    ((s32 (*)(void *, void *))(vt1 = *(void* const**)((char *)(arg0) + (0x78)))[17])((char *)arg0 + 0x70, arg1);
}
