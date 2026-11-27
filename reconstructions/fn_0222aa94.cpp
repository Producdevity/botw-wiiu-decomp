extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x70 - 4];
    int value;
};
}

extern "C" void fn_0222aa94(void *object) {
    Object *self = (Object *)object;
    void *target = fn_037966a8(self->owner);

    if (target != 0) {
        int value = self->value;
        fn_0344a898(target, &value);
    }
}
