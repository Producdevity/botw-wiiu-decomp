typedef int s32;

extern "C" void fn_025a1c34(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013ec98;

extern "C" void fn_02820f98(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_025a1c34(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1013ec98;
    fn_030ea23c(arg0, (char *)arg0 + 0x3C, &sp.f8);
}
