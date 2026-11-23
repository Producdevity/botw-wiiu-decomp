typedef int s32;

extern "C" void fn_02255ebc(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10062f44;

extern "C" void fn_022566f0(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_02255ebc(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_10062f44;
    fn_030e9c7c(arg0, (char *)arg0 + 0xF0, &sp.f8);
}
