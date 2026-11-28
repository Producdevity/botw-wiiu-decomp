typedef int s32;

extern "C" void fn_02e912fc(void*);

namespace {
struct Object {
    char padding_0[0x3C];
    void *const *vtable;
};
}

extern "C" void fn_02e91314(void *object) {
    fn_02e912fc(object);
    ((s32 (*)()) ((Object *) object)->vtable[23])();
    ((s32 (*)(void *)) ((Object *) object)->vtable[27])(object);
}
