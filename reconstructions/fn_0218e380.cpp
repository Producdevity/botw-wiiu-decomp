typedef int s32;

extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_03267a68(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1003a840;

extern "C" void fn_0218e380(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_03267a68(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1003a840;
    fn_030e9aa8(arg0, (char *)arg0 + 0x20, &sp.f8);
}
