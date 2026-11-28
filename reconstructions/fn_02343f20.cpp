extern "C" void fn_022a01fc(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_02343f20(void *object) {
    fn_022a01fc(object);
    if (fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
