extern "C" void fn_02915ea8(void*);
extern "C" void fn_02915ec4(void*);
extern "C" int fn_0339a0d0(void *);
extern "C" int fn_0339a0d8(void*);
extern "C" int fn_0339a0e0(void *);

extern "C" void fn_02915ee0(void **object_slot) {
    void *target = *object_slot;
    if ((fn_0339a0d8(target) != 0) || ((fn_0339a0e0(target) != 0) && (fn_0339a0d0(target) != 0))) {
        fn_02915ea8(object_slot);
        return;
    }
    fn_02915ec4(object_slot);
}
