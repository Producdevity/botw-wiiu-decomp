typedef int s32;

extern "C" void fn_0280c430(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013b400;

extern "C" void fn_0280b620(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0280c430(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1013b400;
    fn_030ea164(arg0, (char *)arg0 + 0x24, &sp.f8);
}
