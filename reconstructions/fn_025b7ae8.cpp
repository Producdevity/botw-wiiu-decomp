typedef int s32;

extern "C" void fn_034c0f1c(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100ec518;

namespace {
const s32 kFlagMask = 0x40000000;

struct Owner {
    unsigned char padding_0[0x364];
    s32 flags;
    unsigned char padding_368[0x38];
    void *component;
};
}

extern "C" void fn_025b7ae8(void **object_slot) {
    Owner *owner = (Owner *)*object_slot;
    owner->flags = (s32) (owner->flags | kFlagMask);
    fn_034c0f1c(owner->component);
    fn_037b8284(object_slot, &data_100ec518, 0);
}
