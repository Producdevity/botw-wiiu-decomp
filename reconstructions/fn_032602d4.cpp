namespace {
struct Vtable {
    char padding_0[0x104];
    void *(*method_104)(void *);
};

struct Object {
    void *owner;
    char padding_4[8];
    Vtable *vtable;
};
}

extern "C" void fn_0379884c(void *, void *);

extern "C" void fn_032602d4(void *self)
{
    Vtable *vtable = ((Object *)self)->vtable;
    void *target = vtable->method_104(self);
    if (target != 0) {
        fn_0379884c(((Object *)self)->owner, target);
    }
}
