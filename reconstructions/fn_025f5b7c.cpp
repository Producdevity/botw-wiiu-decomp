typedef int s32;

extern "C" void fn_0252e858(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100f2a2c;

extern "C" void fn_025f5b7c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0252e858(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100f2a2c;
    fn_030e9b44(arg0, (char *)arg0 + 0x60, &sp.f8);
}
