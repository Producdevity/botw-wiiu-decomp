typedef int s32;

extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100547c0;

extern "C" void fn_0220ddd8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0221da1c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100547c0;
    fn_030e9be0(arg0, (char *)arg0 + 0x18, &sp.f8);
}
