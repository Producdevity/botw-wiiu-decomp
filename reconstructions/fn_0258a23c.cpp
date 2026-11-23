typedef int s32;

extern "C" void fn_0258a714(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100e6550;

extern "C" void fn_0258a23c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0258a714(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100e6550;
    fn_030ea23c(arg0, (char *)arg0 + 0x28, &sp.f8);
}
