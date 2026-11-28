extern "C" void fn_021cce40(void*);

namespace {
struct Target {
    char padding_0[0x12];
    unsigned char flags;
};

struct Owner {
    char padding_0[0x1C];
    int linked;
    char padding_20[4];
    Target** targets;
};

struct Object {
    char padding_0[0x330];
    Owner* owner;
};
}

extern "C" void fn_0233f870(void** self)
{
    fn_021cce40(self);
    Owner* owner = static_cast<Object*>(*self)->owner;
    if (owner != 0) {
        Target** targets = 0;
        Target* target = 0;
        if (owner->linked != 0) {
            targets = owner->targets;
            target = *targets;
        }
        target->flags |= 0x20;
    }
}
