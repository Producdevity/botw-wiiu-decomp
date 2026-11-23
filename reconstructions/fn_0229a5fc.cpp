extern "C" int fn_02296aa0(void*);
extern "C" void fn_0229cc40(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_0229a5fc(void *arg0) {
    fn_0229cc40(arg0);
    if (fn_02296aa0(arg0) != 0) {
        fn_030ea2cc(arg0);
    }
}
