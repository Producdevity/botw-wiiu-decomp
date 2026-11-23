typedef int s32;

extern "C" void fn_020ec0a8(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10081778;

extern "C" void fn_0230bb84(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020ec0a8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10081778;
    fn_030e9b44(arg0, (char *)arg0 + 0x4C, &sp.f8);
}
