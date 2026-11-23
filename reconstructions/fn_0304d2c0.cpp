typedef int s32;

extern "C" void fn_0304cc00(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1025a838;

extern "C" void fn_0304d2c0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    sp.fC = &data_10263910;
    sp.f8 = &data_1025a838;
    fn_0304cc00(arg0, (char *)arg0 + 0x407CC, &sp.f8);
}
