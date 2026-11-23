typedef int s32;

extern "C" void fn_030ea11c(void*, void*, void*);
extern "C" void fn_032c7ac8(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10037608;

extern "C" void fn_0217d1ec(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_032c7ac8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10037608;
    fn_030ea11c(arg0, (char *)arg0 + 0x3C, &sp.f8);
}
