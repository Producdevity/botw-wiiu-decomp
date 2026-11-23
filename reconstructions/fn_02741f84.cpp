typedef int s32;

extern "C" void fn_02565bac(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10121fc8;

extern "C" void fn_02741f84(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02565bac(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10121fc8;
    fn_030ea164(arg0, (char *)arg0 + 0x40, &sp.f8);
}
