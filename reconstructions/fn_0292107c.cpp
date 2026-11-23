typedef int s32;

extern "C" void fn_02922440(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016608c;

extern "C" void fn_0292107c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02922440(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1016608c;
    fn_030e9be0(arg0, (char *)arg0 + 0x24, &sp.f8);
}
