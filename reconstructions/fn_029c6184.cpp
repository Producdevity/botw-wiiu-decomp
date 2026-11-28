namespace {
struct Vtable {
    char padding_0[0x74];
    void (*method_74)(void *);
};

struct Object {
    char padding_0[0x10];
    Vtable *vtable;
    char padding_14[4];
    unsigned char *flag_18;
};
}

extern "C" void fn_029c6054(void* object);

extern "C" void fn_029c6184(void* object) {
    Object *view = (Object *)object;
    if (*view->flag_18 != 0) {
        ((Object *)object)->vtable->method_74(object);
        fn_029c6054(object);
    }
}
