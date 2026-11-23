typedef int s32;

extern "C" void fn_022a82e0(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10034220;

extern "C" void fn_0216b088(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_022a82e0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10034220;
    fn_030ea23c(arg0, (char *)arg0 + 0x18, &sp.f8);
}
