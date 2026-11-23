typedef int s32;

extern "C" void fn_028dab84(void*);
extern "C" void fn_02b50a38(unsigned char, int);

extern "C" void fn_0281b2dc(void *arg0) {
    void* const* vt1;
    fn_028dab84(arg0);
    if (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[11])(arg0) == 0) {
        fn_02b50a38(0U, (*(s32 *)((char *)(arg0) + (0))));
    }
}
