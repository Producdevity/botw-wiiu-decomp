typedef int s32;

extern "C" void fn_0304cc00(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1025a7ec;

extern "C" void fn_0304cd84(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    sp.fC = &data_10263910;
    sp.f8 = &data_1025a7ec;
    fn_0304cc00(arg0, (char *)arg0 + 0x4079C, &sp.f8);
}
