typedef int s32;

extern "C" void fn_02534b3c(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10113ec4;

extern "C" void fn_026d48a8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02534b3c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10113ec4;
    fn_030e9d18(arg0, (char *)arg0 + 0xA0, &sp.f8);
}
