extern "C" void fn_0434bda8(void*, void*);

namespace {
struct Object {
    char padding_0[0xC];
    void *child;
    char padding_10[8];
    void* const* vtable;
};
}

extern "C" int fn_03c9a72c(void *self, void *destination) {
    Object *object = static_cast<Object *>(self);
    void *child;

    child = object->child;
    if (child != 0) {
        fn_0434bda8(destination, child);
    }
    ((int (*)(void *))object->vtable[9])(object);
    return 0;
}
