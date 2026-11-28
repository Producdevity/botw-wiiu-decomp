extern "C" int fn_02296aa0(void*);
extern "C" void fn_0229cc40(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_0229a5fc(void *object) {
    fn_0229cc40(object);
    if (fn_02296aa0(object) != 0) {
        fn_030ea2cc(object);
    }
}
