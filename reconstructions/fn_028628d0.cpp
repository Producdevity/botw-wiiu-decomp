extern "C" void fn_028628a0(void*);
extern "C" void fn_028628b0(void*);
extern "C" void fn_028628c0(void*);
extern "C" int fn_0339a0d0(void *);
extern "C" int fn_0339a0e0(void *);
extern "C" int fn_0379a9ac(void*);

extern "C" void fn_028628d0(void **object) {
    void *owner = *object;
    if (fn_0379a9ac(owner) != 0) {
        fn_028628a0(object);
        return;
    }
    if ((fn_0339a0e0(owner) != 0) && (fn_0339a0d0(owner) == 0)) {
        fn_028628c0(object);
        return;
    }
    fn_028628b0(object);
}
