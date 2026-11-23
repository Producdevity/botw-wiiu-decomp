typedef int s32;

extern "C" void fn_02225540(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100567d0;

extern "C" void fn_02215570(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02225540(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_100567d0;
    fn_030ea23c(arg0, (char *)arg0 + 0x24, &sp.f8);
}
