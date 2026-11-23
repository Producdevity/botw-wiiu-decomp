typedef int s32;

extern "C" void fn_023fe96c(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_02424c38(void *arg0) {
    void* const* vt1;
    fn_023fe96c(arg0);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x20)))[19])((char *)arg0 + 0x18);
    if (fn_03794838(arg0, 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
