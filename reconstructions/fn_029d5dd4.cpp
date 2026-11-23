typedef int s32;

extern "C" void fn_029d4d34(void*);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10181004;

extern "C" void fn_029d5dd4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_029d4d34(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10181004;
    fn_030ff774(arg0, (char *)arg0 + 0x18, &sp.f8);
}
