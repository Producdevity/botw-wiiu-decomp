typedef signed char s8;

extern "C" void fn_0378a540(void*, void*);

namespace {
struct Object {
    unsigned char padding_0[0x125C];
    void *child;
    unsigned char padding_1260[0x1E8];
    s8 dirty;
};
}

extern "C" void fn_02e520d0(void *arg0) {
    Object *self = (Object *)arg0;
    void *child = self->child;
    if (child != 0) {
        fn_0378a540(child, 0);
    }
    self->dirty = 1;
}
