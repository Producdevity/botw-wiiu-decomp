extern "C" void fn_02736044(void*);
extern "C" void fn_027360a4(void*);
extern "C" void fn_03458474(void*);

namespace {
struct Object {
    char padding_0[0x1F8];
    void *child;
};
}

extern "C" void fn_02737db4(void *object) {
    Object *self = (Object *)object;

    fn_027360a4(self);
    fn_02736044(self);
    if (self->child != 0) {
        fn_03458474(self->child);
    }
}
