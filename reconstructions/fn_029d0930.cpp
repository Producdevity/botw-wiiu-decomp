extern "C" void fn_02b271d4(void*, void*, void*, void*);
extern "C" void fn_02b273a4(void*, void*);
extern "C" void fn_02b27414(void*);

namespace {
struct Holder {
    void *target;
    unsigned char padding_4[0x10];
    unsigned char first[8];
    unsigned char second[8];
    unsigned char member[1];
};
}

extern "C" void fn_029d0930(void **arg0) {
    Holder *self = (Holder *)arg0;
    void *target = self->target;
    fn_02b271d4(self->member, target, self->first, self->second);
    fn_02b27414(self->member);
    fn_02b273a4(self->member, target);
}
