extern "C" void fn_03548860(void *);

extern "C" float data_102d66ec;

namespace {
struct Object {
    char padding_0[0xC];
    char base[0x12C];
    int value_138;
    char padding_13C[0x40];
    float value_17c;
};
}

extern "C" void fn_0351eafc(void *object) {
    Object *self = (Object *) object;
    fn_03548860(self->base);
    self->value_138 = 0;
    self->value_17c = data_102d66ec;
}
