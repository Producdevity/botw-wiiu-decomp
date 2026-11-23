typedef int s32;

extern "C" void fn_0220d320(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005964c;

extern "C" void fn_0221fa30(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0220d320(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1005964c;
    fn_030e9be0(arg0, (char *)arg0 + 0x1C, &sp.f8);
}
