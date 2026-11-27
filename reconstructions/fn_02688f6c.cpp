typedef int s32;

extern "C" void fn_0294f720(void *, int, void *);

namespace {
struct Target {
    unsigned char padding_0[0xE8];
    void *const *vtable;
};

struct Holder {
    Target *target;
    unsigned char padding_4[0x3C];
    unsigned char member[1];
};
}

extern "C" void fn_02688f6c(void **arg0) {
    Holder *self = (Holder *)arg0;
    Target *target = self->target;
    ((s32 (*)(void *))target->vtable[255])(target);
    fn_0294f720(self->target, 4, self->member);
}
