extern "C" void fn_021893a0(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_02189a5c(void *object) {
    fn_021893a0(object);
    if (fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
