typedef int s32;

extern "C" void fn_027bdaac(void*);
extern "C" void fn_030e9fac(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1012d0dc;

extern "C" void fn_0278c48c(void *arg0) {
    struct { const void* f8; const void* fC; } sp;

    fn_027bdaac(arg0);
    sp.fC = &data_10263910;
    sp.f8 = &data_1012d0dc;
    fn_030e9fac(arg0, (char *)arg0 + 0x1A0, &sp.f8);
}
