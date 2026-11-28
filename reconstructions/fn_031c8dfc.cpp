typedef int s32;

extern "C" void fn_031c438c(void*);
extern "C" void fn_0388bb4c(int);

namespace {
struct Object {
    char padding_0[0x174A8];
    s32 resource;
    char padding_174ac[4];
    void *child;
};
}

extern "C" void fn_031c8dfc(void *object) {
    Object *self = (Object *)object;

    s32 resource = self->resource;
    if (resource != 0) {
        fn_0388bb4c(resource);
    }
    void *child = self->child;
    if (child != 0) {
        fn_031c438c(child);
    }
}
