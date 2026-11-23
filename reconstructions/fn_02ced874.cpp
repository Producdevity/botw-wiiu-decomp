typedef int s32;

extern "C" void fn_02c8d6c4(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101dbb68;

extern "C" void fn_02ced874(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02c8d6c4(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_101dbb68;
    fn_030e9be0(arg0, (char *)arg0 + 0x20, &sp.f8);
}
