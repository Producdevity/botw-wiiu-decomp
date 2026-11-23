typedef int s32;

extern "C" void fn_022832e8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10017518;

extern "C" void fn_020c3df8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_022832e8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10017518;
    fn_030e9be0(arg0, (char *)arg0 + 0x68, &sp.f8);
}
