typedef int s32;

extern "C" void fn_0318ff00(void*);
extern "C" void fn_03192288(void*);

namespace {
struct Object {
    char padding_0[0x30];
    void *const *vtable;
};
}

extern "C" void fn_0318ff5c(void *object) {
    fn_03192288(object);
    ((s32 (*)(void *, void *)) ((Object *) object)->vtable[9])(object, object);
    fn_0318ff00(object);
}
