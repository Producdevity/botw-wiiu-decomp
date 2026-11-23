typedef int s32;

extern "C" void fn_023041d0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007ef28;

extern "C" void fn_02304900(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023041d0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1007ef28;
    fn_030e9be0(arg0, (char *)arg0 + 0x150, &sp.f8);
}
