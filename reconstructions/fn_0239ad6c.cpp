typedef int s32;

extern "C" void fn_0239a238(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10098dd8;

extern "C" void fn_0239ad6c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0239a238(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10098dd8;
    fn_030e9b44(arg0, (char *)arg0 + 0x14, &sp.f8);
}
