typedef int s32;

extern "C" void fn_020deda0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100389f8;

extern "C" void fn_0218350c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020deda0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100389f8;
    fn_030e9b44(arg0, (char *)arg0 + 0x38, &sp.f8);
}
