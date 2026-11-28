typedef int s32;

extern "C" void fn_03629450(void*);
extern "C" void fn_036294a4(void*);
extern "C" void fn_037d81a0(void*);

namespace {
struct Object {
    char padding_0[0xC];
    void *resource;
    s32 active;
};
}

extern "C" void fn_0362951c(void *object) {
    Object *self = (Object *)object;

    if (self->active != 0) {
        fn_03629450(object);
        void *resource = self->resource;
        if (resource != 0) {
            fn_037d81a0(resource);
        }
        fn_036294a4(object);
    }
}
