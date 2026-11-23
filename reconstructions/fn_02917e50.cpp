typedef int s32;

extern "C" void fn_02919b40(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10164508;

extern "C" void fn_02917e50(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02919b40(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10164508;
    fn_030e9c7c(arg0, (char *)arg0 + 0x24, &sp.f8);
}
