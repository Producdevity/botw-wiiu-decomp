typedef float f32;

extern "C" void fn_0227d96c(void*);
extern "C" void fn_02b746c0(void*, float);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" f32 data_1006b6f8;

extern "C" void fn_0227dad0(void **arg0) {
    fn_0227d96c(arg0);
    fn_02b746c0(*arg0, data_1006b6f8);
    if (fn_03794838(arg0, 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
