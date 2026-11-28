typedef int s32;
extern "C" void fn_0286322c(void*);

namespace {
struct Object {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_0286b4b0(void *object) {
    fn_0286322c(object);
    ((s32 (*)(void *, s32)) ((Object *) object)->vtable[71])(object, 0);
}
