typedef int s32;
typedef float f32;

extern "C" void fn_025cf2b0(void *);

extern "C" f32 data_100eede4;

namespace {
struct OwnerVtable {
    void *padding_0[187];
    s32 (*setValue)(void *, s32, f32);
};

struct Owner {
    unsigned char padding_0[0xE8];
    const OwnerVtable *vtable;
};
}

extern "C" void fn_025d0e04(void **object_slot) {
    fn_025cf2b0(object_slot);
    Owner *owner = (Owner *)*object_slot;
    owner->vtable->setValue(owner, 0, data_100eede4);
}
