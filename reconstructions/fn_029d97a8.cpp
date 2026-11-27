typedef unsigned char u8;
typedef int s32;

extern "C" void fn_034c44a4(void*, int);

namespace {
struct Component {
    unsigned char padding_0[0xD0];
    s32 first;
    s32 second;
};

struct Owner {
    unsigned char padding_0[0x3A0];
    Component *component;
};

struct Object {
    Owner *owner;
    unsigned char padding_4[0x14];
    u8 *enabled;
};
}

extern "C" void fn_029d97a8(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    if (*object->enabled != 0) {
        Component *component = object->owner->component;
        if (component != 0) {
            fn_034c44a4(component, component->first);
            fn_034c44a4(component, component->second);
        }
    }
}
