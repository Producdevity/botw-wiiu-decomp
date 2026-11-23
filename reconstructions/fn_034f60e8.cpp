typedef signed char s8;
typedef int s32;

extern "C" unsigned int fn_030c5d30(const char *);
extern "C" void fn_034f602c(void*, void*);

extern "C" void fn_034f60e8(void *arg0, void *arg1) {
    void* const* vt1;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (4)))[7])(arg1);
    fn_034f602c(arg0, (void *)(fn_030c5d30((const char *)((*(s8 **)((char *)(arg1) + (0)))))));
}
