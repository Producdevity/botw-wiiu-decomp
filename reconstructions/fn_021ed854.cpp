typedef int s32;

extern "C" void fn_02201e5c(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004da4c;

extern "C" void fn_021ed854(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02201e5c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1004da4c;
    fn_030e9c7c(arg0, (char *)arg0 + 0x64, &sp.f8);
}
