typedef int s32;

extern "C" void fn_03babf3c(void *, const void *);
extern "C" void fn_03be87ac(void*);

extern "C" void fn_03bad3dc(void *arg0) {
    struct { s32 f8; } sp;

    fn_03be87ac(*(*(void ***)((char *)(arg0) + (0xD8))));
    sp.f8 = 4;
    fn_03babf3c(arg0, &sp.f8);
}
