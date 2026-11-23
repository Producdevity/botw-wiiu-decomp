typedef int s32;

extern "C" void fn_030ea284(void*, void*, void*);
extern "C" void fn_0327d848(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10126af4;

extern "C" void fn_027605f0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0327d848(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10126af4;
    fn_030ea284(arg0, (char *)arg0 + 0xAC, &sp.f8);
}
