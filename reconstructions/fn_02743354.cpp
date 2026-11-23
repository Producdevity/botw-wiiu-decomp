typedef int s32;

extern "C" void fn_02594ef8(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10122340;

extern "C" void fn_02743354(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02594ef8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10122340;
    fn_030ea164(arg0, (char *)arg0 + 0xBC, &sp.f8);
}
