extern "C" void fn_0294f720(void *, int, void *);

namespace {
struct Vtable {
    void *slots[255];
    int (*call)(void *);
};

struct Target {
    unsigned char padding_0[0xE8];
    Vtable *vtable;
};

struct Holder {
    Target *target;
    unsigned char padding_4[0x3C];
    unsigned char member[1];
};
}

extern "C" void fn_02688f6c(void **object) {
    Holder *self = reinterpret_cast<Holder *>(object);
    Target *target = self->target;
    target->vtable->call(target);
    fn_0294f720(self->target, 4, self->member);
}
