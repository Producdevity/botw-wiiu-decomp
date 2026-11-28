namespace {
struct Child {
    unsigned char padding_0[0x10];
    void* const* vtable;
};

struct Parent {
    unsigned char padding_0[4];
    Child* child;
    unsigned char padding_8[0x1C0];
    signed char pending;
};
}

extern "C" void fn_02e7195c(void*);

extern "C" void fn_02e71d04(void* object) {
    Parent* parent = (Parent*)object;
    fn_02e7195c(object);
    Child* child = parent->child;
    ((int (*)(Child*))child->vtable[19])(child);
    parent->pending = 0;
}
