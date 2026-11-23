typedef int s32;

extern "C" void fn_02402278(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001e888;

extern "C" void fn_020f2b3c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02402278(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1001e888;
    fn_030e9aa8(arg0, (char *)arg0 + 0x18, &sp.f8);
}
