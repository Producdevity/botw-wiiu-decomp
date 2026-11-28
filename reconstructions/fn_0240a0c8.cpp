extern "C" void fn_021db02c(void*);
extern "C" int fn_02409c8c(void*);
extern "C" void fn_030ea2e0(void *);

extern "C" void fn_0240a0c8(void *object) {
    fn_021db02c(object);
    if (fn_02409c8c(object) == 0) {
        fn_030ea2e0(object);
    }
}
