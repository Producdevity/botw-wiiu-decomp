typedef int s32;

extern "C" void fn_022f9758(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1009eb70;

extern "C" void fn_023b655c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_022f9758(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1009eb70;
    fn_030e9d18(arg0, (char *)arg0 + 0x90, &sp.f8);
}
