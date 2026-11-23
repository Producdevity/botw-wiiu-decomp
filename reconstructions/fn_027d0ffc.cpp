typedef int s32;

extern "C" void fn_027bdaac(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10133154;

extern "C" void fn_027d0ffc(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_027bdaac(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10133154;
    fn_030e9d18(arg0, (char *)arg0 + 0x1A0, &sp.f8);
}
