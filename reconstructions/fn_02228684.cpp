typedef int s32;

extern "C" void fn_02228b24(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005b8ac;

extern "C" void fn_02228684(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02228b24(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1005b8ac;
    fn_030e9b44(arg0, (char *)arg0 + 0x38, &sp.f8);
}
