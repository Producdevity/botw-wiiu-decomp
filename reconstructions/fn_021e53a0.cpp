extern "C" void fn_021e709c(void*);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" int fn_02b61950(void*, void*);

namespace {
struct Holder {
    void *target;
    unsigned char padding_4[0x7C];
    unsigned char member[1];
};
}

extern "C" void fn_021e53a0(void **handle) {
    Holder *self = (Holder *)handle;
    void *target;

    fn_021e709c(handle);
    target = self->target;
    fn_02b616f0(self->member, target);
    fn_02b616bc(self->member, (void *)(fn_02b61950(self->member, target)));
}
