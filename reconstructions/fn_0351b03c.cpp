extern "C" void fn_03548860(void *);

extern "C" float data_102d5b10;

namespace {
struct Object {
    char padding_0[0xC];
    char base[0x12C];
    int value_138;
    float value_13c;
};
}

extern "C" void fn_0351b03c(void *object) {
    Object *self = (Object *) object;
    fn_03548860(self->base);
    self->value_138 = 0;
    self->value_13c = data_102d5b10;
}
