typedef int s32;

extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_0332d00c(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10179b08;

extern "C" void fn_029b2f84(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0332d00c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10179b08;
    fn_030ff774(arg0, (char *)arg0 + 0xD8, &sp.f8);
}
