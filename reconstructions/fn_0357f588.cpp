extern "C" void fn_0357f524(void*);
extern "C" void fn_03ba0058(void*);

extern "C" void fn_0357f588(void **arg0) {
    void *owned;

    fn_0357f524(arg0);
    owned = *arg0;
    if (owned != 0) {
        fn_03ba0058(owned);
        *arg0 = 0;
    }
}
