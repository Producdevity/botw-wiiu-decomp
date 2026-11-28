extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_023aad1c(void *object) {
    if (fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
