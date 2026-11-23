typedef int s32;

extern "C" void fn_02257db8(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100637e4;

extern "C" void fn_022587dc(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02257db8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100637e4;
    fn_030e9b44(arg0, (char *)arg0 + 0x38, &sp.f8);
}
