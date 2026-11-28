extern "C" void* fn_0434d1d8(void *, int, unsigned int);

namespace {
struct Object {
    char padding_0[0x30];
    char block[4];
    signed char value_34;
    char padding_35;
    short value_36;
    signed char value_38;
    signed char value_39;
};
}

extern "C" void fn_03ca0874(void *object) {
    Object *self = (Object *) object;
    fn_0434d1d8(self->block, 0, 4);
    self->value_34 = 0;
    self->value_36 = 0;
    self->value_38 = 0;
    self->value_39 = 0;
}
