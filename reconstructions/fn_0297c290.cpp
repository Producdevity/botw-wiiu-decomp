extern "C" void fn_0297be28(void*);
extern "C" void fn_0339a080(void *);
extern "C" int fn_0339a0d0(void *);
extern "C" int fn_0339a0e0(void *);

extern "C" void fn_0297c290(void **holder) {
    fn_0297be28(holder);
    void *target = *holder;

    if (fn_0339a0e0(target) == 0 || fn_0339a0d0(target) != 0) {
        fn_0339a080(target);
    }
}
