typedef int s32;

extern "C" void fn_027fea3c(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013ce18;

extern "C" void fn_028145a8(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_027fea3c(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1013ce18;
    fn_030ea284(arg0, (char *)arg0 + 0x24, &sp.f8);
}
