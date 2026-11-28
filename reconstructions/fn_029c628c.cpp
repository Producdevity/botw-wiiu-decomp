namespace {
struct Vtable {
    char padding_0[0x74];
    void (*method_74)(void *);
};

struct Object {
    char padding_0[0x10];
    Vtable *vtable;
    char padding_14[8];
    unsigned char *flag_1c;
};
}

extern "C" void fn_029c6054(void* object);

extern "C" void fn_029c628c(void* object) {
    Object *view = (Object *)object;
    if (*view->flag_1c != 0) {
        ((Object *)object)->vtable->method_74(object);
        fn_029c6054(object);
    }
}
