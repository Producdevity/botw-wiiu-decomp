extern "C" void fn_0339a080(void *);
extern "C" void fn_0339a0c4(void *);
extern "C" int fn_0339a0d0(void *);

extern "C" void fn_03271dec(void **holder) {
    void *object = *holder;

    if (fn_0339a0d0(object) != 0) {
        fn_0339a080(object);
        return;
    }
    fn_0339a0c4(object);
}
