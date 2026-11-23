typedef int s32;

extern "C" void fn_02787fa4(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1012cc18;

extern "C" void fn_02788b34(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02787fa4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1012cc18;
    fn_030e9aa8(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
