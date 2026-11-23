typedef int s32;

extern "C" void fn_02100304(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a6c30;

extern "C" void fn_023e8e14(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02100304(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100a6c30;
    fn_030e9be0(arg0, (char *)arg0 + 0x7C, &sp.f8);
}
