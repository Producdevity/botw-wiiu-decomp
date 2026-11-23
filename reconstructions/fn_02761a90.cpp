typedef signed char s8;
typedef int s32;

extern "C" void fn_0378da14(void*, void*);

extern "C" void fn_02761a90(void *arg0, void *arg1) {
    void* const* vt1;
    (*(s8 *)((char *)(arg0) + (0x44))) = 0;
    fn_0378da14((char *)arg0 + 0x28, arg1);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x48)))[7])((char *)arg0 + 0x28);
    (*(s8 *)((char *)(arg0) + (0x20))) = 0;
}
