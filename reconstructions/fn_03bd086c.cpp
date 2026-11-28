typedef int s32;
extern "C" void fn_03bd0744(void*);

namespace {
struct Object {
    char padding_0[8];
    void *const *vtable;
};
}

extern "C" void fn_03bd086c(void *object) {
    fn_03bd0744(object);
    if (object != 0) {
        ((s32 (*)(void *, s32)) ((Object *) object)->vtable[3])(object, 3);
    }
}
