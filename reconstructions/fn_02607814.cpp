typedef int s32;

extern "C" void fn_02607194(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100f5724;

extern "C" void fn_02607814(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02607194(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100f5724;
    fn_030e9b44(arg0, (char *)arg0 + 0x34, &sp.f8);
}
