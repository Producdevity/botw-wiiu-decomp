typedef int s32;

extern "C" void fn_0339bd38(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101004b4;
extern "C" s32 data_101004c0;

extern "C" void fn_026513d4(void **arg0) {
    struct { const void* f8; const void* fC; } sp;

    sp.fC = &data_10263910;
    sp.f8 = &data_101004c0;
    fn_0339bd38(*arg0, &sp.f8);
    fn_037b8284(arg0, &data_101004b4, 0);
}
