typedef int s32;

extern "C" void fn_021e70a0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004c160;

extern "C" void fn_021e76b8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_021e70a0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1004c160;
    fn_030e9be0(arg0, (char *)arg0 + 0x80, &sp.f8);
}
