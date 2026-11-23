typedef int s32;

extern "C" void fn_02429000(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100b2294;

extern "C" void fn_02429b18(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02429000(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100b2294;
    fn_030e9aa8(arg0, (char *)arg0 + 0x44, &sp.f8);
}
