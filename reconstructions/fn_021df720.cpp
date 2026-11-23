typedef int s32;

extern "C" void fn_02232514(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004a098;

extern "C" void fn_021df720(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02232514(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1004a098;
    fn_030ea284(arg0, (char *)arg0 + 0x40, &sp.f8);
}
