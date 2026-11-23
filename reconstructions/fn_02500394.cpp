typedef int s32;

extern "C" void fn_0292107c(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100d0fd8;

extern "C" void fn_02500394(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0292107c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100d0fd8;
    fn_030ea23c(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
