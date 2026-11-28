extern "C" void fn_03548860(void *);

extern "C" float data_102e0a7c;

namespace {
struct Object {
    char padding_0[0xC];
    char base[0x1B4];
    int value_1c0;
    float value_1c4;
};
}

extern "C" void fn_0354fa94(void *object) {
    Object *self = (Object *) object;
    fn_03548860(self->base);
    self->value_1c0 = 0;
    self->value_1c4 = data_102e0a7c;
}
