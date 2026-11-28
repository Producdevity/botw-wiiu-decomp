typedef unsigned char u8;

namespace {
struct Owner {
    void *entity;
    unsigned char padding_4[0x2A8];
    u8 *enabled;
};
}

extern "C" void fn_0344bafc(void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_026ada28(void *object) {
    Owner *owner = (Owner *)object;
    void *target = fn_037966a8(owner->entity);
    if (target != 0 && *owner->enabled != 0) {
        fn_0344bafc(target);
    }
}
