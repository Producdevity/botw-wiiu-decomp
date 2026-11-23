typedef int s32;

extern "C" void fn_020e29ac(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1001d058;

extern "C" void fn_020e8dec(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020e29ac(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1001d058;
    fn_030e9be0(arg0, (char *)arg0 + 0xF4, &sp.f8);
}
