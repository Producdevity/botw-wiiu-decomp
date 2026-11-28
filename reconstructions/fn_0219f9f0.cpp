namespace {
struct Object {
    char padding_0[0x10];
    void **target;
    unsigned char *flag;
};
}

extern "C" void fn_03077824(void*);
extern "C" void fn_030778f4(int);

extern "C" int fn_0219f9f0(void *object) {
    Object *view = (Object *) object;
    if (*view->flag != 0) {
        fn_03077824(*view->target);
        return 1;
    }
    fn_030778f4((int) object);
    return 1;
}
