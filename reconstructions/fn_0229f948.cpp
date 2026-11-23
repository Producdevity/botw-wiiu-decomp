typedef int s32;

extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_032d44e0(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006fec8;

extern "C" void fn_0229f948(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_032d44e0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1006fec8;
    fn_030e9be0(arg0, (char *)arg0 + 0x34, &sp.f8);
}
