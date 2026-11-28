typedef int s32;

extern "C" int fn_021d0590(void*);

namespace {
struct Object {
    unsigned char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_021d06a0(void *object) {
    void *const *vtable = ((Object *)object)->vtable;
    ((s32 (*)(void *, s32))vtable[65])(object, fn_021d0590(object));
}
