extern "C" void fn_0398a8b0(void*, int);

namespace {
struct Child {
    unsigned char padding_0[0x54];
    void *owner;
};

struct Parent {
    unsigned char padding_0[0xA4];
    Child *child;
};

struct Object {
    unsigned char padding_0[4];
    Parent *parent;
};
}

extern "C" void fn_03711eb0(void *object) {
    Parent *parent;
    Child *child;

    parent = ((Object *)object)->parent;
    if (parent != 0) {
        child = parent->child;
        if (child != 0) {
            fn_0398a8b0(child, 1);
            child->owner = object;
        }
    }
}
