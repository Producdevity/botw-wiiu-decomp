typedef int s32;

extern "C" void fn_02232514(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10049944;

extern "C" void fn_021ddbd8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02232514(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10049944;
    fn_030e9aa8(arg0, (char *)arg0 + 0x40, &sp.f8);
}
