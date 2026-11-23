typedef int s32;

extern "C" void fn_0295f99c(void*);
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10135788;

extern "C" void fn_027e2f5c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0295f99c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10135788;
    fn_030ea0cc(arg0, (char *)arg0 + 0x3C, &sp.f8);
}
