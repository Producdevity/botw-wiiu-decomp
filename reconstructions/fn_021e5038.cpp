typedef int s32;

extern "C" void fn_021e4924(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004b5f8;

extern "C" void fn_021e5038(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_021e4924(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1004b5f8;
    fn_030e9c7c(arg0, (char *)arg0 + 0x5C, &sp.f8);
}
