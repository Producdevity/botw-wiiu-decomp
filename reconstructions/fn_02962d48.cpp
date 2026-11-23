typedef int s32;

extern "C" void fn_0295f99c(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016ea38;

extern "C" void fn_02962d48(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0295f99c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1016ea38;
    fn_030e9d18(arg0, (char *)arg0 + 0x3C, &sp.f8);
}
