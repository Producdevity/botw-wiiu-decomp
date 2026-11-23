typedef int s32;

extern "C" void fn_026a82cc(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100ffd70;

extern "C" void fn_0264dd9c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_026a82cc(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100ffd70;
    fn_030e9be0(arg0, (char *)arg0 + 0x64, &sp.f8);
}
