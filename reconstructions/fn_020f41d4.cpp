extern "C" void fn_020f4130(void*);
extern "C" void fn_0243971c(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_020f41d4(void *arg0) {
    fn_0243971c(arg0);
    fn_020f4130(arg0);
    if (fn_03794838(arg0, 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
