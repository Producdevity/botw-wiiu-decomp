typedef float f32;

extern "C" void fn_03187d9c(void*, void*);
extern "C" void fn_0318822c(void*);
extern "C" void fn_0318bbbc(void*, void*);

extern "C" f32 data_1028be64;

extern "C" void fn_03188b74(void *arg0) {
    struct { f32 f8; } sp;

    fn_0318bbbc((char *)arg0 + 0xC, (char *)arg0 + 4);
    sp.f8 = data_1028be64 - (*(f32 *)((char *)(arg0) + (4)));
    fn_03187d9c((char *)arg0 + 0xB8, &sp.f8);
    fn_0318822c((char *)arg0 + 0xB8);
}
