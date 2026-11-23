typedef int s32;

extern "C" void fn_0280b620(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013a0ec;

extern "C" void fn_027ff0b8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0280b620(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1013a0ec;
    fn_030e9aa8(arg0, (char *)arg0 + 0x50, &sp.f8);
}
