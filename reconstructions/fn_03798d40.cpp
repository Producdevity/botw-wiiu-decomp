extern "C" void fn_034c1ca8(void*, int);
extern "C" void fn_0380fa5c(void*, int);

namespace {
struct Child {
    char padding_0[0x58];
    void *target;
};
struct Owner {
    char padding_0[0x3A0];
    Child *child;
};
}

extern "C" void fn_03798d40(void *object) {
    Owner *owner = (Owner *)object;
    Child *child;
    void *target;

    child = owner->child;
    if (child != 0) {
        target = child->target;
        if (target != 0) {
            fn_0380fa5c(target, 0);
            fn_034c1ca8(child, 1);
        }
    }
}
