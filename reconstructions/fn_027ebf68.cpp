typedef int s32;

extern "C" void fn_028986c0(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10137d14;

extern "C" void fn_027ebf68(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_028986c0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10137d14;
    fn_030e9aa8(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
