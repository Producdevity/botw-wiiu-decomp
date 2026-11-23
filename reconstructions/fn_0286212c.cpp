typedef int s32;

extern "C" void fn_02863284(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10148a14;

extern "C" void fn_0286212c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02863284(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10148a14;
    fn_030e9aa8(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
