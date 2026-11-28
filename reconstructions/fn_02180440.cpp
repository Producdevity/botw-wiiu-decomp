namespace {
struct Object {
    char padding_0[0x100];
    signed char value_100;
};
}

extern "C" void fn_0211bd20(void*);
extern "C" int fn_0218018c(void*);
extern "C" void fn_021803cc(void*);

extern "C" void fn_02180440(void *object) {
    fn_0211bd20(object);
    if (fn_0218018c(object) != 0) {
        fn_021803cc(object);
        return;
    }
    ((Object *) object)->value_100 = -1;
}
