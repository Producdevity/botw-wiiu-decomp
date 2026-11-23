typedef int s32;

extern "C" void fn_030ea11c(void*, void*, void*);
extern "C" void fn_03277204(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cb520;

extern "C" void fn_024deb20(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_03277204(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100cb520;
    fn_030ea11c(arg0, (char *)arg0 + 0x24, &sp.f8);
}
