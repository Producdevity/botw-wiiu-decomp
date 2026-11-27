typedef unsigned int u32;

extern "C" void fn_0313d928(void*, void*, void*);

namespace {
struct Object {
    char padding_0[0x28];
    void *child;
};
}

extern "C" void fn_031374a8(void *object, u32 flags) {
    Object *self;
    void *child;

    self = (Object *)object;
    child = self->child;
    if (child != 0) {
        fn_0313d928(child, object, (void *) flags);
        self->child = 0;
    }
}
