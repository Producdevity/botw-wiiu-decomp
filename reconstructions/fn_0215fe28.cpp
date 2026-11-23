extern "C" void fn_023fe96c(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_0215fe28(void *arg0) {
    fn_023fe96c(arg0);
    if (fn_03794838(arg0, 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
