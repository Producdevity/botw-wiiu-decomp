extern "C" void fn_02195824(void*);
extern "C" void fn_03177734(void*, void*);

namespace {
struct Target {
    char padding_0[0x388];
    void *component;
};
struct Holder {
    Target *target;
};
}

extern "C" void fn_0227e5ac(void **object) {
    void *component;

    fn_02195824(object);
    component = ((Holder *)object)->target->component;
    if (component != 0) {
        fn_03177734(component, (char *)object + 0x98);
    }
}
