typedef int s32;

extern "C" int fn_0406ea3c(void*, void*);

namespace {
struct Owner {
    char padding_0[0x5C];
    void *target;
};
struct Object {
    void *const *vtable;
    Owner *owner;
};
}

extern "C" void fn_034d99b8(void *object) {
    Object *self = (Object *) object;
    fn_0406ea3c(self->owner->target, object);
    ((s32 (*)(void *, s32)) self->vtable[9])(object, 3);
}
