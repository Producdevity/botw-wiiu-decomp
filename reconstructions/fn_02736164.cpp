typedef int s32;

extern "C" void fn_02736044(void *);
extern "C" void fn_027360a4(void *);
extern "C" void fn_031b078c(void*, void*);
extern "C" void fn_0339bd38(void *, void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101208b0;
extern "C" s32 data_101208b8;
extern "C" s32 data_1047c210;

extern "C" void fn_02736164(void **arg0) {
    struct { const void* f8; const void* fC; } sp;

    sp.fC = &data_10263910;
    sp.f8 = &data_101208b0;
    fn_0339bd38(*arg0, &sp.f8);
    fn_02736044(arg0);
    fn_031b078c((void *)(data_1047c210 + 0x71CC), *arg0);
    fn_027360a4(arg0);
    fn_037b8284(arg0, &data_101208b8, 0);
}
