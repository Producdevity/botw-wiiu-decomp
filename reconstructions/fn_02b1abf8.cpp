extern "C" void fn_02b18140(void *, void *);

namespace {
struct Object {
    char padding_0[4];
    char field_4;
    char padding_5[0xF];
    char flag_14;
    char padding_15[0x8B];
    char flag_a0;
};
}

extern "C" void fn_02b1abf8(void* object)
{
    Object* self = (Object*)object;
    char zero = 0;
    self->flag_a0 = zero;
    fn_02b18140(object, &self->field_4);
    self->flag_14 = zero;
}
