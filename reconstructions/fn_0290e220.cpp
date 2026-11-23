typedef int s32;

extern "C" void fn_025e83dc(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10161f10;

extern "C" void fn_0290e220(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_025e83dc(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10161f10;
    fn_030e9aa8(arg0, (char *)arg0 + 0x130, &sp.f8);
}
