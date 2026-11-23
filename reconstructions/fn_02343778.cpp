typedef int s32;

extern "C" void fn_023432e4(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1008a38c;

extern "C" void fn_02343778(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023432e4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1008a38c;
    fn_030e9b44(arg0, (char *)arg0 + 0x60, &sp.f8);
}
