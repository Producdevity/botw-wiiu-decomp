typedef int s32;

extern "C" void fn_02134bec(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10064078;

extern "C" void fn_0225a1f4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02134bec(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10064078;
    fn_030e9c7c(arg0, (char *)arg0 + 0x64, &sp.f8);
}
