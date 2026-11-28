typedef int s32;

extern "C" void fn_0339bd38(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016b830;
extern "C" s32 data_1016b838;

extern "C" void fn_0293cd58(void **object) {
    struct { const void* f8; const void* fC; } sp;

    sp.fC = &data_10263910;
    sp.f8 = &data_1016b830;
    fn_0339bd38(*object, &sp.f8);
    fn_037b8284(object, &data_1016b838, 0);
}
