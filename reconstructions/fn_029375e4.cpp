typedef int s32;

extern "C" void fn_02921c68(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016acf4;

extern "C" void fn_029375e4(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02921c68(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1016acf4;
    fn_030ea03c(arg0, (char *)arg0 + 0x2C, &sp.f8);
}
