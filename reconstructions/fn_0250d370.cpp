typedef int s32;

extern "C" void fn_024bdc70(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100d35e8;

extern "C" void fn_0250d370(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_024bdc70(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100d35e8;
    fn_030ea284(arg0, (char *)arg0 + 0xF4, &sp.f8);
}
