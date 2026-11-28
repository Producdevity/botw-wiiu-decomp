extern "C" void fn_02b18140(void *, void *);

namespace {
struct Object {
    char padding_0[4];
    char field_4;
    char padding_5[0xF];
    char flag_14;
    char padding_15[0x7B];
    char flag_90;
};
}

extern "C" void fn_02b1ad70(void* object)
{
    Object* self = (Object*)object;
    char zero = 0;
    self->flag_90 = zero;
    fn_02b18140(object, &self->field_4);
    self->flag_14 = zero;
}
