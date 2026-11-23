typedef int s32;

extern "C" void fn_028e85b4(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10128d04;

extern "C" void fn_027697b4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_028e85b4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10128d04;
    fn_030ea284(arg0, (char *)arg0 + 0x3C, &sp.f8);
}
