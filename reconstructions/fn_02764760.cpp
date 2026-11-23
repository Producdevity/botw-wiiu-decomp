typedef int s32;

extern "C" void fn_0254d338(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10127b38;

extern "C" void fn_02764760(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_0254d338(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10127b38;
    fn_030e9be0(arg0, (char *)arg0 + 0x140, &sp.f8);
}
