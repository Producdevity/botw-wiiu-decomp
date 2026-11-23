typedef int s32;

extern "C" void fn_0246893c(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100129b8;

extern "C" void fn_02093ea8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0246893c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100129b8;
    fn_030ea03c(arg0, (char *)arg0 + 0x118, &sp.f8);
}
