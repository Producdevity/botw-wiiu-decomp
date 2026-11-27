typedef int s32;

extern "C" void fn_023067f8(void*);
extern "C" void fn_02b61634(void*, void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Component {
    void *owner;
    unsigned char padding_4[0x80];
    unsigned char listener[4];
};
}

extern "C" void fn_02308cdc(void **object_slot) {
    Component *component = (Component *)object_slot;
    fn_023067f8(object_slot);
    void *target = fn_037966a8(*object_slot);
    s32 mode = 3;
    fn_02b61634(component->listener, target, &mode);
}
