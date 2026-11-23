typedef int s32;

extern "C" unsigned fn_03488464(void *);
extern "C" void fn_034aaafc(void*, void*);

extern "C" void fn_03488b8c(void *arg0, void *arg1) {
    void* const* vt1;
    if ((s32) (*(s32 *)((char *)(arg0) + (0x80))) == 0) {
        fn_034aaafc((char *)arg0 + 0x70, arg1);
        return;
    }
    ((s32 (*)())(vt1 = *(void* const**)((char *)(fn_03488464(arg0)) + (0xC)))[31])();
}
