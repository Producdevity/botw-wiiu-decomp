typedef int s32;

extern "C" void fn_029df368(void*);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10183ab8;

extern "C" void fn_029e0f28(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_029df368(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10183ab8;
    fn_030ff774(arg0, (char *)arg0 + 0x24, &sp.f8);
}
