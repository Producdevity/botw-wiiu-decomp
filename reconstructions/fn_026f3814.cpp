extern "C" void fn_029509ac(void*);
extern "C" int fn_03185930(void*, void*);

namespace {
struct Owner {
    unsigned char padding_0[0x3B4];
    void* slot;
};
struct Target {
    unsigned char padding_0[0x60];
    unsigned short flags;
};
}

extern "C" void fn_026f3814(void** owner_slot, void* key)
{
    Target* target = (Target*) fn_03185930(((Owner*) *owner_slot)->slot, key);
    if (target != 0) {
        unsigned int flags = target->flags;
        flags &= 0xFFFFFFCF;
        target->flags = flags;
    }
    fn_029509ac(*owner_slot);
}
