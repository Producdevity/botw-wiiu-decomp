typedef int s32;

extern "C" void fn_0296693c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100e1080;

extern "C" void fn_02565090(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0296693c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100e1080;
    fn_030e9be0(arg0, (char *)arg0 + 0x38, &sp.f8);
}
