typedef int s32;

extern "C" void fn_022ffbac(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007dcc8;

extern "C" void fn_022ff744(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_022ffbac(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1007dcc8;
    fn_030ea03c(arg0, (char *)arg0 + 0x24, &sp.f8);
}
