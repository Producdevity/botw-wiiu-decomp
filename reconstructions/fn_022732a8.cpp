typedef int s32;

extern "C" void fn_023ba6f0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100693cc;

extern "C" void fn_022732a8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023ba6f0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100693cc;
    fn_030e9b44(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
