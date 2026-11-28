extern "C" int fn_02296aa0(void*);
extern "C" void fn_02298a48(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_0229a2dc(void *object) {
    fn_02298a48(object);
    if (fn_02296aa0(object) != 0) {
        fn_030ea2cc(object);
    }
}
