typedef int s32;

extern "C" void fn_0229a324(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006e0b8;

extern "C" void fn_02297e04(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0229a324(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1006e0b8;
    fn_030e9b44(arg0, (char *)arg0 + 0x28, &sp.f8);
}
