typedef int s32;

extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    void *owner;
    unsigned char padding_4[0x1C];
    s32 value;
};
}

extern "C" void fn_0234174c(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    void *target = fn_037966a8(object->owner);
    if (target != 0) {
        s32 value = object->value;
        fn_0344a898(target, &value);
    }
}
