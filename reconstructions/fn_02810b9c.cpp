typedef int s32;

extern "C" void fn_0281bfc0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013c6ac;

extern "C" void fn_02810b9c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0281bfc0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1013c6ac;
    fn_030e9be0(arg0, (char *)arg0 + 0x50, &sp.f8);
}
