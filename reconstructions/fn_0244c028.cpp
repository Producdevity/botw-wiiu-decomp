typedef unsigned char u8;

extern "C" void fn_023fe5b0(void*);

namespace {
struct Target {
    char padding_0[0x26C];
    u8 flags;
};
struct TargetHolder {
    char padding_0[0x38C];
    Target *target;
};
struct Holder {
    TargetHolder *owner;
};
}

extern "C" void fn_0244c028(void **object) {
    Target *target;

    fn_023fe5b0(object);
    target = (Target *)((TargetHolder *)((Holder *)object)->owner)->target;
    if (target != 0) {
        target->flags = (u8) (target->flags | 2);
    }
}
