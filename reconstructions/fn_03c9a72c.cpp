typedef int s32;

extern "C" void fn_0434bda8(void*, void*);

namespace {
struct Object {
    char padding_0[0xC];
    void *child;
    char padding_10[8];
    void* const* vtable;
};
}

extern "C" s32 fn_03c9a72c(void *arg0, void *arg1) {
    Object *object = (Object *)arg0;
    void *child;

    child = object->child;
    if (child != 0) {
        fn_0434bda8(arg1, child);
    }
    ((s32 (*)(void *))object->vtable[9])(object);
    return 0;
}
