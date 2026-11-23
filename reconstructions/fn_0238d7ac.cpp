typedef int s32;

extern "C" void fn_020eb244(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10096748;

extern "C" void fn_0238d7ac(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020eb244(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10096748;
    fn_030e9be0(arg0, (char *)arg0 + 0x4C, &sp.f8);
}
