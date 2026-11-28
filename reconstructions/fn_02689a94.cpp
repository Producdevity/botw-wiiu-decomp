extern "C" void fn_0370de48(void*, int);
extern "C" void fn_0370e02c(void*);

namespace {
struct Owner {
    char padding_0[0x394];
    void *component;
};
}

extern "C" void fn_02689a94(void **object) {
    Owner *owner;
    void *component;

    owner = static_cast<Owner *>(*object);
    if (owner != 0) {
        component = owner->component;
        if (component != 0) {
            fn_0370e02c(component);
            fn_0370de48(component, 1);
        }
    }
}
