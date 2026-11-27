typedef signed char s8;

extern "C" void fn_0378a24c(void*, void*);

namespace {
struct Object {
    char padding_0[0x125C];
    void *component;
    char padding_1260[0x1448 - 0x1260];
    s8 active;
};
}

extern "C" void fn_02e5208c(void *object) {
    Object *self;
    void *component;

    self = (Object *)object;
    component = self->component;
    if (component != 0) {
        fn_0378a24c(component, 0);
    }
    self->active = 0;
}
