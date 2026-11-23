extern "C" int fn_02296aa0(void*);
extern "C" void fn_02298a48(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_0229a2dc(void *arg0) {
    fn_02298a48(arg0);
    if (fn_02296aa0(arg0) != 0) {
        fn_030ea2cc(arg0);
    }
}
