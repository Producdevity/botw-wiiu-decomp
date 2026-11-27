typedef int s32;

namespace {
struct Object {
    char padding_0[0xC];
    void* const* vtable;
};
}

extern "C" void fn_037b88e0(void *object) {
    Object *child;

    child = (Object *)((void * (*)())((Object *)object)->vtable[53])();
    if (child != 0) {
        ((s32 (*)())child->vtable[41])();
    }
}
