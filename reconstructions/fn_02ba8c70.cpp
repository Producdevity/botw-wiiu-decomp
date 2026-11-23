typedef int s32;

extern "C" int fn_02c0378c(void*, void*);
extern "C" void fn_02c097f4(void);

extern "C" void fn_02ba8c70(void *arg0, void *arg1) {
    void* const* vt1;
    if (fn_02c0378c((char *)arg0 + 0x10, arg1) != 0) {
        fn_02c097f4();
    }
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[87])(arg0);
}
