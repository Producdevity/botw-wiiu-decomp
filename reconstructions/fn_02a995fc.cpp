typedef int s32;
typedef unsigned int u32;

namespace {
struct OwnerVtable {
    void *padding_0[195];
    void *(*getInfo)(void *);
};

struct Owner {
    unsigned char padding_0[0xE8];
    const OwnerVtable *vtable;
};

struct Info {
    unsigned char padding_0[8];
    u32 flags;
};
}

extern "C" s32 fn_02a995fc(void **object_slot) {
    Owner *owner = (Owner *)*object_slot;
    Info *info = (Info *)owner->vtable->getInfo(owner);
    if ((info != 0) && ((info->flags >> 0x16U) & 1)) {
        return 1;
    }
    return 0;
}
