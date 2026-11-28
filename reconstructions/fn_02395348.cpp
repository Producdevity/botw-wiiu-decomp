extern "C" void fn_02b540a8(void*, void*);
extern "C" void fn_02b541ac(void*, int, int);

namespace {
struct Holder {
    void *target;
    unsigned char padding_4[0x60];
    unsigned char member[1];
};
}

extern "C" void fn_02395348(void **object) {
    Holder *self = reinterpret_cast<Holder *>(object);
    void *target = self->target;
    fn_02b540a8(target, self->member);
    fn_02b541ac(target, 1, 8);
}
