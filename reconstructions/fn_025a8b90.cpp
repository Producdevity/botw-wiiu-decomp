typedef int s32;

extern "C" void fn_025964c4(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100ea750;

extern "C" void fn_025a8b90(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_025964c4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100ea750;
    fn_030e9d18(arg0, (char *)arg0 + 0x4C, &sp.f8);
}
