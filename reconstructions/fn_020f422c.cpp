typedef int s32;

extern "C" void fn_02439748(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001ee60;

extern "C" void fn_020f422c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02439748(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1001ee60;
    fn_030e9aa8(arg0, (char *)arg0 + 0xCC, &sp.f8);
}
