typedef int s32;

extern "C" void fn_02133554(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006ab08;

extern "C" void fn_0227aa58(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02133554(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1006ab08;
    fn_030e9be0(arg0, (char *)arg0 + 0xF4, &sp.f8);
}
