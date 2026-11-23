typedef int s32;

extern "C" void fn_02b7e394(void*, void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005b48c;

extern "C" void fn_02227cec(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02b7e394((char *)arg0 + 0x10, arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1005b48c;
    fn_030e9d18(arg0, (char *)arg0 + 0x64, &sp.f8);
}
