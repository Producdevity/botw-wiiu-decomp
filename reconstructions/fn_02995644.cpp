typedef float f32;

extern "C" void fn_02b83104(void*, void*, void*, float);

extern "C" f32 data_10176024;

namespace {
struct Target {
    unsigned char padding_0[0xE8];
    void *const *vtable;
};

struct Holder {
    Target *target;
    unsigned char padding_4[0x100];
    unsigned char member[1];
};
}

extern "C" void fn_02995644(void **object) {
    Holder *self = (Holder *)object;
    Target *target = self->target;
    fn_02b83104(0, ((void * (*)(void *))target->vtable[91])(target), self->member, data_10176024);
}
