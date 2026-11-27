extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Holder {
    void *target;
    unsigned char padding_4[0x28];
    unsigned char member[1];
};
}

extern "C" void fn_0245cc48(void **arg0) {
    Holder *self = (Holder *)arg0;
    void *target = self->target;
    fn_02b616f0(self->member, target);
    fn_02b616bc(self->member, fn_037966a8(target));
}
