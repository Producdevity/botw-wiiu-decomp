extern "C" void fn_023b9ebc(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_022c582c(void *arg0) {
    fn_023b9ebc(arg0);
    if (fn_03794838(arg0, 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
