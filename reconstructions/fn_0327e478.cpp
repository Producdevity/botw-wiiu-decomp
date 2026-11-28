typedef int s32;

extern "C" void fn_0339bd38(void*, void*);
extern "C" void fn_0339bd58(void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1029e0d0;

extern "C" void fn_0327e478(void **slot) {
    struct { const void* f8; const void* fC; } sp;

    fn_0339bd58(*slot);
    sp.fC = &data_10263910;
    sp.f8 = &data_1029e0d0;
    fn_0339bd38(*slot, &sp.f8);
}
