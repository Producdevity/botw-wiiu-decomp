typedef int s32;

extern "C" void fn_0229ae48(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006df38;

extern "C" void fn_022977e8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0229ae48(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1006df38;
    fn_030e9be0(arg0, (char *)arg0 + 0x54, &sp.f8);
}
