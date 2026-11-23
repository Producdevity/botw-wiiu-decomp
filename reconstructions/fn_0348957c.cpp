typedef int s32;

extern "C" unsigned fn_03488464(void *);
extern "C" void fn_034aa9ec(void*, void*);

extern "C" void fn_0348957c(void *arg0, void *arg1) {
    void* const* vt1;
    if ((s32) (*(s32 *)((char *)(arg0) + (0x80))) == 0) {
        fn_034aa9ec((char *)arg0 + 0x70, arg1);
        return;
    }
    ((s32 (*)())(vt1 = *(void* const**)((char *)(fn_03488464(arg0)) + (0xC)))[11])();
}
