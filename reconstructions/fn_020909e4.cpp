typedef int s32;

extern "C" void fn_022f9758(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10011954;

extern "C" void fn_020909e4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_022f9758(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10011954;
    fn_030e9aa8(arg0, (char *)arg0 + 0x90, &sp.f8);
}
