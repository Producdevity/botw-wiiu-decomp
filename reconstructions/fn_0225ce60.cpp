typedef int s32;

extern "C" void fn_020f422c(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100644b8;

extern "C" void fn_0225ce60(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020f422c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100644b8;
    fn_030e9b44(arg0, (char *)arg0 + 0xD4, &sp.f8);
}
