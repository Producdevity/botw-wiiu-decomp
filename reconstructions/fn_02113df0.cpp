typedef int s32;

extern "C" void fn_021db0e8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10024e34;

extern "C" void fn_02113df0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_021db0e8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10024e34;
    fn_030e9be0(arg0, (char *)arg0 + 0x8C, &sp.f8);
}
