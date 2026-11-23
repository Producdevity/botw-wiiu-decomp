typedef int s32;

extern "C" void fn_023e9bd8(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a6f54;

extern "C" void fn_023ea56c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023e9bd8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100a6f54;
    fn_030e9aa8(arg0, (char *)arg0 + 0x54, &sp.f8);
}
