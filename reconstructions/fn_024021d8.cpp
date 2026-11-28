typedef int s32;

extern "C" void fn_023fe96c(void*);

namespace {
struct Target {
    char padding_0[8];
    void *const *vtable;
};
struct Object {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_024021d8(void *object) {
    fn_023fe96c(object);
    void *target = ((void *(*)(void *)) ((Object *) object)->vtable[65])(object);
    ((s32 (*)()) ((Target *) target)->vtable[19])();
}
