typedef int s32;

extern "C" void fn_025c6c6c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101118ec;

extern "C" void fn_026c5bd0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_025c6c6c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_101118ec;
    fn_030e9be0(arg0, (char *)arg0 + 0x2A4, &sp.f8);
}
