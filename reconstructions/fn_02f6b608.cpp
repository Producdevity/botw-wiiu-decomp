typedef int s32;
extern "C" void fn_02e8ef2c(void*);
extern "C" void *data_104698d0;

namespace {
struct Object {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_02f6b608(void *object) {
    fn_02e8ef2c(data_104698d0);
    ((s32 (*)(void *, s32)) ((Object *) object)->vtable[13])(object, -1);
}
