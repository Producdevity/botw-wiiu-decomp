extern "C" void fn_02b50a38(unsigned char value, int id);
extern "C" void fn_030ea2cc(void* object);

namespace {
struct Object {
    int id;
    char padding_4[7];
    unsigned char flags;
    char padding_c[4];
    unsigned char* value;
};
}

extern "C" void fn_0207dcac(void* object)
{
    Object* self = (Object*)object;
    fn_02b50a38(*self->value, self->id);
    self->flags |= 4;
    fn_030ea2cc(object);
}
