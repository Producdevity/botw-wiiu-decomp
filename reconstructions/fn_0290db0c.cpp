typedef int s32;

struct Base;
struct Owner;
extern "C" void* fn_02b62bc8(void*);

namespace {
struct TargetVtable {
    void *padding_0[17];
    s32 (*getId)();
};

struct Target {
    unsigned char padding_0[0x1C];
    const TargetVtable *vtable;
};
}

extern "C" s32 fn_0290db0c(struct Owner **object_slot) {
    Target *target = (Target *)fn_02b62bc8(*object_slot);
    if ((target != 0) && (target->vtable->getId() != -1)) {
        return 1;
    }
    return 0;
}
