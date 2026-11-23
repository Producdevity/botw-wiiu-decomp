typedef signed char s8;
typedef int s32;

extern "C" void fn_02db75ec(void*, void*);
extern "C" unsigned int fn_030c5d30(const char *);

extern "C" void fn_02db7634(void *arg0, void *arg1) {
    void* const* vt1;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (4)))[7])(arg1);
    fn_02db75ec(arg0, (void *)(fn_030c5d30((const char *)((*(s8 **)((char *)(arg1) + (0)))))));
}
