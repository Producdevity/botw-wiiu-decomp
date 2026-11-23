typedef int s32;

extern "C" void fn_028986c0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cc88c;

extern "C" void fn_024e540c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_028986c0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100cc88c;
    fn_030e9b44(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
