typedef int s32;

extern "C" void fn_028986c0(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10151ab0;

extern "C" void fn_02899734(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_028986c0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10151ab0;
    fn_030ea23c(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
