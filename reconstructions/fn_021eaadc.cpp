typedef int s32;

extern "C" void fn_021eb0e8(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004ce00;

extern "C" void fn_021eaadc(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_021eb0e8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1004ce00;
    fn_030e9aa8(arg0, (char *)arg0 + 0x28, &sp.f8);
}
