typedef int s32;

extern "C" void fn_02787fa4(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10169274;

extern "C" void fn_02930770(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02787fa4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10169274;
    fn_030e9d18(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
