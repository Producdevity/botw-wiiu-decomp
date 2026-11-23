typedef int s32;

extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006b058;

extern "C" void fn_0227bc74(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023fea2c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1006b058;
    fn_030e9b44(arg0, (char *)arg0 + 0x18, &sp.f8);
}
