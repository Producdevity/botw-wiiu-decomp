typedef int s32;

extern "C" void fn_02344994(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a7edc;

extern "C" void fn_023ede50(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02344994(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100a7edc;
    fn_030e9be0(arg0, (char *)arg0 + 0x24, &sp.f8);
}
