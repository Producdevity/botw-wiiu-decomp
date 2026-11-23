typedef int s32;

extern "C" void fn_022134f0(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10056070;

extern "C" void fn_022137fc(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_022134f0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10056070;
    fn_030ea03c(arg0, (char *)arg0 + 0x28, &sp.f8);
}
