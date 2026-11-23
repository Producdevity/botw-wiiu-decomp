typedef int s32;

extern "C" void fn_029dac9c(void*);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101826bc;

extern "C" void fn_029db380(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_029dac9c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_101826bc;
    fn_030ff774(arg0, (char *)arg0 + 0xE4, &sp.f8);
}
