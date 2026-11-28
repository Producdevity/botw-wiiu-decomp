typedef int s32;
extern "C" void fn_0271d590(void*, int);

namespace {
struct Object {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_0271df80(void *object) {
    fn_0271d590(object, 1);
    ((s32 (*)(void *, s32)) ((Object *) object)->vtable[69])(object, 0);
}
