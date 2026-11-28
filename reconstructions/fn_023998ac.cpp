namespace {
struct Object {
    char padding_0[0x10];
    void **target;
    int value_14;
};
}

extern "C" void fn_0307d8d4(void*);
extern "C" void fn_03080a14(int, void*);

extern "C" void fn_023998ac(void *object) {
    if (((Object *) object)->target != 0) {
        fn_03080a14(0x21, 0);
        fn_0307d8d4(*((Object *) object)->target);
    }
    ((Object *) object)->value_14 = 0;
}
