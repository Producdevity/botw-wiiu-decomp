typedef int s32;

extern "C" void fn_02868880(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10149678;

namespace {
const s32 kFlagMask = 0x10000;

struct Owner {
    unsigned char padding_0[0x364];
    s32 flags;
};
}

extern "C" void fn_02868914(void **object_slot) {
    fn_02868880(object_slot);
    Owner *owner = (Owner *)*object_slot;
    owner->flags = (s32) (owner->flags & ~kFlagMask);
    fn_037b8284(object_slot, &data_10149678, 0);
}
