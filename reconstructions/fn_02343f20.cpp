extern "C" void fn_022a01fc(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_02343f20(void *arg0) {
    fn_022a01fc(arg0);
    if (fn_03794838(arg0, 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
