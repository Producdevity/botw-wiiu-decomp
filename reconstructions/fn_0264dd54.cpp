typedef signed char s8;

extern "C" void fn_026a82ac(void*);
extern "C" void fn_0317be7c(void*);

namespace {
struct Owner {
    unsigned char padding_0[0x38C];
    void *component;
};

struct Object {
    Owner *owner;
    unsigned char padding_4[0x68];
    s8 active;
};
}

extern "C" void fn_0264dd54(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    fn_026a82ac(object);
    void *component = object->owner->component;
    if (component != 0) {
        fn_0317be7c(component);
    }
    object->active = 0;
}
