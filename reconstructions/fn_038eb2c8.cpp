extern "C" void fn_03548860(void *);

extern "C" float data_10334e64;

namespace {
struct Object {
    char padding_0[0xC];
    char base[0x12C];
    int value_138;
    float value_13c;
};
}

extern "C" void fn_038eb2c8(void *object) {
    Object *self = (Object *) object;
    fn_03548860(self->base);
    self->value_138 = 0;
    self->value_13c = data_10334e64;
}
