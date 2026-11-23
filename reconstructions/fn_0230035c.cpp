typedef int s32;

extern "C" void fn_0214e984(void*);
extern "C" void fn_030ea084(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007dfe8;

extern "C" void fn_0230035c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0214e984(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1007dfe8;
    fn_030ea084(arg0, (char *)arg0 + 0x4C, &sp.f8);
}
