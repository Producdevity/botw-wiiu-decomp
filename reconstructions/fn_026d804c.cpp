typedef int s32;

extern "C" void fn_026d8584(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10114a80;

extern "C" void fn_026d804c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_026d8584(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10114a80;
    fn_030ea23c(arg0, (char *)arg0 + 0x30, &sp.f8);
}
