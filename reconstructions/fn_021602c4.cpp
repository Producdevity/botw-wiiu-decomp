typedef int s32;

extern "C" void fn_0215fe78(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10031cdc;

extern "C" void fn_021602c4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0215fe78(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10031cdc;
    fn_030e9be0(arg0, (char *)arg0 + 0x20, &sp.f8);
}
