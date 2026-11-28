typedef int s32;

namespace {
struct Source {
    s32 value;
    void *const *vtable;
};
struct Object {
    char padding_0[0x9C];
    s32 value_9c;
};
}

extern "C" void fn_03a7fc84(void *object, void *source) {
    ((s32 (*)(void *)) ((Source *) source)->vtable[7])(source);
    ((Object *) object)->value_9c = ((Source *) source)->value;
}
