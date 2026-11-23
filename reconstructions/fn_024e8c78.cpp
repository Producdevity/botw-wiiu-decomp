typedef int s32;

extern "C" void fn_025daecc(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cd0d0;

extern "C" void fn_024e8c78(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_025daecc(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100cd0d0;
    fn_030e9be0(arg0, (char *)arg0 + 0xA4, &sp.f8);
}
