extern "C" void fn_0249901c(void *, void *);
extern "C" void fn_02885a2c(void*);
extern "C" void* fn_0294f338(void *);
extern "C" void fn_0378da14(void* handle);

namespace {
struct Object {
    void *owner;
    unsigned char padding_4[0x64];
    unsigned char handle[4];
};
}

extern "C" void fn_02886c3c(void **object_slot, void *unused) {
    Object *object = (Object *)object_slot;
    fn_0378da14(object->handle);
    fn_02885a2c(object_slot);
    void *target = fn_0294f338(*object_slot);
    if (target != 0) {
        fn_0249901c(target, (void *)4);
    }
}
