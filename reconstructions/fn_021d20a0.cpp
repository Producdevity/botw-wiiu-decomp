typedef int s32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x1C];
    s32 value;
};
}

extern "C" void fn_023fec98(void *);
extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_021d20a0(void *self) {
    Object *object = (Object *)self;
    s32 value;
    fn_023fec98(self);
    void *target = fn_037966a8(object->owner);
    if (target != 0) {
        value = object->value;
        fn_0344a898(target, &value);
    }
}
