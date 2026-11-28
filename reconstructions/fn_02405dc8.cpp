extern "C" void fn_02408408(int);
extern "C" float data_100ab5f0;

namespace {
struct Target {
    char padding_0[0x114];
    float value;
};
struct VTable {
    char padding_0[0x30C];
    void *(*get_target)(void *);
};
struct Object {
    char padding_0[0xE8];
    VTable *vtable;
};
}

extern "C" void fn_02405dc8(void** self)
{
    void** owner = self;
    void* object = *owner;
    VTable* vtable = ((Object *) object)->vtable;
    void* target = vtable->get_target(object);
    if (target != 0) {
        ((Target *) target)->value = data_100ab5f0;
    }
    fn_02408408((int)self);
}
