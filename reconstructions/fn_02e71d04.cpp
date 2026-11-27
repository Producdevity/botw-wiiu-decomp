typedef signed char s8;
typedef int s32;

namespace {
struct Child {
    unsigned char padding_0[0x10];
    void *const *vtable;
};

struct Parent {
    unsigned char padding_0[4];
    Child *child;
    unsigned char padding_8[0x1C0];
    s8 pending;
};
}

extern "C" void fn_02e7195c(void*);

extern "C" void fn_02e71d04(void *arg0) {
    Parent *parent = (Parent *)arg0;
    fn_02e7195c(arg0);
    Child *child = parent->child;
    ((s32 (*)(Child *))child->vtable[19])(child);
    parent->pending = 0;
}
