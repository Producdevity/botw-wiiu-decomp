extern "C" void fn_022c53a0(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_02160794(void *object) {
    fn_022c53a0(object);
    if (fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
