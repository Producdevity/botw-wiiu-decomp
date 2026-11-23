typedef int s32;

extern "C" void fn_029b9a24(void*);
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1017b860;

extern "C" void fn_029b9108(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_029b9a24(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1017b860;
    fn_030ff7a8(arg0, (char *)arg0 + 0x1C, &sp.f8);
}
