typedef int s32;

extern "C" void fn_02226644(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004d8e0;

extern "C" void fn_021ed3b4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02226644(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1004d8e0;
    fn_030e9c7c(arg0, (char *)arg0 + 0x5C, &sp.f8);
}
