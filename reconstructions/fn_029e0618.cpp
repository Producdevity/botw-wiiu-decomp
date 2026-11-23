typedef int s32;

extern "C" void fn_029c8a18(void*);
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10183900;

extern "C" void fn_029e0618(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_029c8a18(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10183900;
    fn_030ff7a8(arg0, (char *)arg0 + 0x28, &sp.f8);
}
