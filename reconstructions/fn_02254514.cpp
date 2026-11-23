typedef int s32;

extern "C" void fn_02255ebc(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10062b68;

extern "C" void fn_02254514(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02255ebc(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10062b68;
    fn_030e9be0(arg0, (char *)arg0 + 0xF0, &sp.f8);
}
