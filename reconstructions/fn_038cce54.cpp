typedef int s32;
extern "C" void fn_038ccdec(void*);

namespace {
struct Object {
    char padding_0[0xA4];
    void *const *vtable;
};
}

extern "C" void fn_038cce54(void *object) {
    fn_038ccdec(object);
    if (object != 0) {
        ((s32 (*)(void *, s32)) ((Object *) object)->vtable[7])(object, 3);
    }
}
