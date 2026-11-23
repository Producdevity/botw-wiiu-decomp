typedef int s32;

extern "C" void fn_02228684(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005bbd8;

extern "C" void fn_022290a0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02228684(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1005bbd8;
    fn_030e9aa8(arg0, (char *)arg0 + 0x3C, &sp.f8);
}
