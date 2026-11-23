typedef int s32;

extern "C" void fn_020680ac(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100340c0;

extern "C" void fn_0216a95c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020680ac(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100340c0;
    fn_030e9aa8(arg0, (char *)arg0 + 0x7D4, &sp.f8);
}
