extern "C" void fn_0256681c(void*);
extern "C" void fn_02566884(void*);
extern "C" int fn_0339a0d0(void *);
extern "C" void fn_0339bd58(void *);
extern "C" int fn_0379a9ac(void*);

extern "C" void fn_025668ec(void **object) {
    void *owner = *object;
    fn_0339bd58(owner);
    if (fn_0379a9ac(owner) != 0 || fn_0339a0d0(owner) != 0) {
        fn_0256681c(object);
        return;
    }
    fn_02566884(object);
}
