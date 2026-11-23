typedef int s32;

extern "C" void fn_02e1a480(void*, void*);
extern "C" void fn_02e1a4a0(void*);
extern "C" void fn_03075e04(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 fn_0231ab80(void) {
    struct { s32 f8; s32 fC; const void* f10; } sp;

    fn_02e1a480(&sp.f8, 0);
    sp.fC = sp.f8;
    sp.f10 = &data_10263910;
    fn_03075e04(&sp.fC);
    fn_02e1a4a0(0);
    return 1;
}
