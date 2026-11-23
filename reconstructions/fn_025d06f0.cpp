typedef int s32;

extern "C" void fn_025d02a0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100eec54;

extern "C" void fn_025d06f0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_025d02a0(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100eec54;
    fn_030e9b44(arg0, (char *)arg0 + 0x44, &sp.f8);
}
