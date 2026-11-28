extern "C" void fn_020f4130(void*);
extern "C" void fn_0243971c(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_020f41d4(void *object) {
    fn_0243971c(object);
    fn_020f4130(object);
    if (fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
