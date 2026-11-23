typedef float f32;

extern "C" void fn_0229cc40(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0379241c(void*, float);

extern "C" f32 data_100b2788;
extern "C" f32 data_100b2798;

extern "C" void fn_0242aabc(void *arg0) {
    fn_0229cc40(arg0);
    fn_0379241c((char *)arg0 + 0x30, data_100b2798);
    if (!((*(f32 *)((char *)(arg0) + (0x30))) > data_100b2788)) {
        fn_030ea2cc(arg0);
    }
}
