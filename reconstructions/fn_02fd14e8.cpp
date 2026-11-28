typedef signed char s8;

extern "C" void fn_03a31898(void*, void*, void*, int);

namespace {
struct Object {
    unsigned char padding_0[0x1B80];
    void *child;
    unsigned char padding_1B84[4];
    s8 pending;
};
}

extern "C" void fn_02fd14e8(void *owner) {
    Object *self = (Object *)owner;
    void *child = self->child;
    if (child != 0) {
        fn_03a31898(child, 0, 0, 1);
        self->pending = 1;
    }
}
