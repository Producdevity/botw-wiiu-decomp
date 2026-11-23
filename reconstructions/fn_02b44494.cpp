typedef int s32;

extern "C" void fn_02b43fe8(void*, void*);
extern "C" void fn_02b44224(void*);
extern "C" void fn_02b442b0(void*);
extern "C" void fn_02b443d4(void*);

extern "C" void fn_02b44494(void *arg0) {
    struct { s32 f8; } sp;

    sp.f8 = 0xA;
    fn_02b43fe8(arg0, &sp.f8);
    fn_02b443d4(arg0);
    fn_02b44224(arg0);
    fn_02b442b0(arg0);
}
