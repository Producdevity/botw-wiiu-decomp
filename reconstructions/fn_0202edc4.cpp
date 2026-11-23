typedef int s32;

extern "C" void fn_02c12f58(void*);
extern "C" void fn_0310d100(void*);

extern "C" void fn_0202edc4(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_0310d100((char *)arg0 + 0x68C);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x6A8)))[49])((char *)arg0 + 0x68C);
    ((s32 (*)(void *))(vt2 = *(void* const**)((char *)(arg0) + (0x6A8)))[43])((char *)arg0 + 0x68C);
    fn_02c12f58((char *)arg0 + 0x828);
}
