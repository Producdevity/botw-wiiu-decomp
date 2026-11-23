typedef int s32;

extern "C" void fn_03593430(void*, void*, void*, void*, void*);
extern "C" void fn_035935b8(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_102e70a4;

extern "C" void fn_03593684(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_035935b8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_102e70a4;
    fn_03593430(arg0, (char *)arg0 + 0xE2C, &sp.f8, 0, 0);
}
