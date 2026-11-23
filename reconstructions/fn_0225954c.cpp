typedef int s32;

extern "C" void fn_020f464c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10063cb4;

extern "C" void fn_0225954c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_020f464c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10063cb4;
    fn_030e9be0(arg0, (char *)arg0 + 0x78, &sp.f8);
}
