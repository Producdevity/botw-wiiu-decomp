typedef int s32;

extern "C" void fn_02189484(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10039bdc;

extern "C" void fn_02189aac(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02189484(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10039bdc;
    fn_030e9aa8(arg0, (char *)arg0 + 0x14, &sp.f8);
}
