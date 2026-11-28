typedef int s32;

extern "C" void fn_0339bd18(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101004a0;
extern "C" s32 data_101004a8;

extern "C" void fn_02651340(void **object) {
    struct { const void* f8; const void* fC; } sp;

    sp.fC = &data_10263910;
    sp.f8 = &data_101004a8;
    fn_0339bd18(*object, &sp.f8);
    fn_037b8284(object, &data_101004a0, 0);
}
