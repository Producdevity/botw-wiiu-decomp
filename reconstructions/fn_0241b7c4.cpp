typedef int s32;

extern "C" void fn_0241c474(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100af494;

extern "C" void fn_0241b7c4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0241c474(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100af494;
    fn_030e9aa8(arg0, (char *)arg0 + 0x5C, &sp.f8);
}
