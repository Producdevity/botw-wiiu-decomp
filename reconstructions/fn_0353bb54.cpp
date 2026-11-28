namespace {
struct Vtable {
    char padding_0[0x6C];
    int (*method_6c)(void *, int);
};

struct Object {
    char padding_0[0x20];
    Vtable *vtable;
    char padding_24[0x168];
    char member_18c[1];
};
}

extern "C" void fn_030b0cb8(unsigned int *, const unsigned int *);

extern "C" void fn_0353bb54(void *object, unsigned *source, int argument) {
    Object *view = (Object *)object;
    fn_030b0cb8((unsigned *)view->member_18c, source);
    view->vtable->method_6c(object, argument);
}
