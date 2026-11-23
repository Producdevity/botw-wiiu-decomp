typedef int s32;

extern "C" void fn_0284bf68(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101446c8;

extern "C" void fn_02848900(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0284bf68(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_101446c8;
    fn_030e9b44(arg0, (char *)arg0 + 0x78, &sp.f8);
}
