typedef int s32;

extern "C" void fn_038002f0(void*, void*);
extern "C" char* data_1047c3d8;

namespace {
struct Object {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_03461998(void *object) {
    fn_038002f0(data_1047c3d8, object);
    if (object != 0) {
        ((s32 (*)(void *, s32)) ((Object *) object)->vtable[13])(object, 3);
    }
}
