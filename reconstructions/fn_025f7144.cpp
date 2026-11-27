typedef int s32;

extern "C" void fn_0370d910(void*, void*, void*, int);
extern "C" void fn_0370e02c(void*);

namespace {
struct Target {
    char padding_0[0x330];
    s32 enabled;
    char padding_334[0x60];
    void *handle;
};

struct Owner {
    Target *target;
    char padding_4[0x20];
    void **slot;
};
}

extern "C" void fn_025f7144(void *owner) {
    Owner *self = (Owner *)owner;
    Target *target = self->target;

    if (target != 0 && target->enabled != 0) {
        fn_0370d910(target->handle, *self->slot, 0, 1);
        fn_0370e02c(target->handle);
    }
}
