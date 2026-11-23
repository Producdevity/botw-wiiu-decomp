typedef float f32;

extern "C" void fn_025e83d8(void *);
extern "C" void fn_0269a000(void*);
extern "C" void fn_0269b150(void*, float);
extern "C" void fn_037988ac(void*, void*);

extern "C" f32 data_1010be48;

extern "C" void fn_0269d854(void **arg0) {
    fn_025e83d8(arg0);
    fn_037988ac(*arg0, (char *)arg0 + 0x1A8);
    fn_0269a000(arg0);
    fn_0269b150(arg0, data_1010be48);
}
