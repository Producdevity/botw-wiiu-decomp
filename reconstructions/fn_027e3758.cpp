typedef int s32;

extern "C" void fn_02756a20(void*);

namespace {
struct Target {
    char padding_0[0xC];
    void *const *vtable;
};
struct Object {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_027e3758(void *object) {
    fn_02756a20(object);
    void *target = ((void *(*)(void *)) ((Object *) object)->vtable[53])(object);
    ((s32 (*)()) ((Target *) target)->vtable[13])();
}
