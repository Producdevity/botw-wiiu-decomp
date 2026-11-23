typedef int s32;

extern "C" void fn_023bdcf8(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a40f4;

extern "C" void fn_023d8c6c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_023bdcf8(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100a40f4;
    fn_030e9b44(arg0, (char *)arg0 + 0xF0, &sp.f8);
}
