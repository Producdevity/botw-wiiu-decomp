extern "C" void fn_030ea2cc(void *);
extern "C" void fn_03261828(void*);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_021225fc(void *object) {
    fn_03261828(object);
    if (fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
