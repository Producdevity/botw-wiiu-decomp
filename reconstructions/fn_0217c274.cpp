typedef int s32;

extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100370d8;

extern "C" void fn_0217c274(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023fea2c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100370d8;
    fn_030e9d18(arg0, (char *)arg0 + 0x18, &sp.f8);
}
