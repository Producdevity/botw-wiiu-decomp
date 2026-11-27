typedef int s32;

extern "C" void fn_0339d744(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10136a44;

namespace {
const s32 kFlagMask = 0x20;

struct Owner {
    unsigned char padding_0[0x364];
    s32 flags;
};
}

extern "C" void fn_027e7984(void **object_slot) {
    fn_0339d744(*object_slot);
    Owner *owner = (Owner *)*object_slot;
    owner->flags = (s32) (owner->flags & ~kFlagMask);
    fn_037b8284(object_slot, &data_10136a44, 0);
}
