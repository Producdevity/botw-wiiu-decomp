typedef int s32;

extern "C" void fn_02558070(void*);
extern "C" void fn_030e9fac(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100de4e0;

extern "C" void fn_02559ea4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02558070(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100de4e0;
    fn_030e9fac(arg0, (char *)arg0 + 0x38, &sp.f8);
}
