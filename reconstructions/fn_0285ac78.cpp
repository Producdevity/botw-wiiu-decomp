typedef int s32;

extern "C" void fn_0271529c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101479bc;

extern "C" void fn_0285ac78(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0271529c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_101479bc;
    fn_030e9be0(arg0, (char *)arg0 + 0x3C, &sp.f8);
}
