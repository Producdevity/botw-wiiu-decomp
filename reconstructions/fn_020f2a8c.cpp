typedef int s32;

extern "C" void fn_024021d8(void*);
extern "C" void fn_030ea2cc(void *);

namespace {
struct Object {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_020f2a8c(void *object) {
    fn_024021d8(object);
    if (((s32 (*)(void *)) ((Object *) object)->vtable[69])(object) != 0) {
        fn_030ea2cc(object);
    }
}
