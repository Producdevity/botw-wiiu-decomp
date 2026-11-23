typedef int s32;

extern "C" void fn_021d7ec8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100484c4;

extern "C" void fn_021d91e0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_021d7ec8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100484c4;
    fn_030e9be0(arg0, (char *)arg0 + 0x50, &sp.f8);
}
