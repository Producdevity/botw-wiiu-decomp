typedef int s32;

extern "C" void fn_023ba02c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007565c;

extern "C" void fn_022c587c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023ba02c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1007565c;
    fn_030e9aa8(arg0, (char *)arg0 + 0x1C, &sp.f8);
}
