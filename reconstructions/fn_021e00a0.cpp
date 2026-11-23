typedef int s32;

extern "C" void fn_0245da40(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004a2a0;

extern "C" void fn_021e00a0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0245da40(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1004a2a0;
    fn_030ea284(arg0, (char *)arg0 + 0x40, &sp.f8);
}
