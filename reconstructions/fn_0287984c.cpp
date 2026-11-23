typedef int s32;

extern "C" void fn_027f606c(void*);
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1014bf84;

extern "C" void fn_0287984c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_027f606c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1014bf84;
    fn_030ea0cc(arg0, (char *)arg0 + 0x260, &sp.f8);
}
