typedef int s32;

extern "C" void fn_022177b4(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10056e9c;

extern "C" void fn_02216ff0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_022177b4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10056e9c;
    fn_030e9aa8(arg0, (char *)arg0 + 0x58, &sp.f8);
}
