typedef int s32;

extern "C" void fn_02863284(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10149b08;

extern "C" void fn_0286b544(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02863284(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10149b08;
    fn_030ea284(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
