typedef float f32;

extern "C" void fn_02b1b2d8(void*, void*);
extern "C" float fn_02b1b3c4(void*);
extern "C" int fn_02b1b404(void*);
extern "C" void fn_02b1b470(void*);

extern "C" void fn_02b1b4c4(void *arg0) {
    (*(f32 *)((char *)(arg0) + (0x30))) = fn_02b1b3c4(arg0);
    fn_02b1b2d8(arg0, (char *)arg0 + 0x3C);
    if (fn_02b1b404(arg0) != 0) {
        fn_02b1b470(arg0);
    }
}
