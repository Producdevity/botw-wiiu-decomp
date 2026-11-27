typedef unsigned char u8;
typedef float f32;

extern "C" void fn_0348e490(void*, float);

extern "C" f32 data_1016bfb4;

namespace {
struct Owner {
    unsigned char padding_0[0xF4];
    void *component;
};

struct Object {
    Owner *owner;
    unsigned char padding_4[7];
    u8 flags;
};
}

extern "C" void fn_0293f9b8(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    void *component = object->owner->component;
    if (component != 0) {
        fn_0348e490(component, data_1016bfb4);
    }
    object->flags = (u8) (object->flags | 4);
}
