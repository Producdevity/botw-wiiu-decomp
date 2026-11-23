typedef int s32;

extern "C" void fn_030ea284(void*, void*, void*);
extern "C" void fn_0327d848(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1014ba40;

extern "C" void fn_02878728(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0327d848(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1014ba40;
    fn_030ea284(arg0, (char *)arg0 + 0xA8, &sp.f8);
}
