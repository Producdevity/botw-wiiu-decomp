typedef int s32;

extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_032c1900(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101106e8;

extern "C" void fn_026beadc(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_032c1900(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_101106e8;
    fn_030e9be0(arg0, (char *)arg0 + 0x28, &sp.f8);
}
