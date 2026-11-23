typedef int s32;

extern "C" void fn_02965930(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016f188;

extern "C" void fn_02965054(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02965930(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1016f188;
    fn_030e9be0(arg0, (char *)arg0 + 0x30, &sp.f8);
}
