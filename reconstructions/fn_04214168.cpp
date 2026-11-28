extern "C" void fn_030deb2c(int);

namespace {
typedef int (*Method)(void*, int, int);

struct Object {
    char padding_0[0xC];
    Method* vtable;
    char padding_10[0xD4];
    char field_e4;
};
}

extern "C" void fn_04214168(void* object, int value)
{
    Object* self = (Object*)object;
    fn_030deb2c((int)&self->field_e4);
    self->vtable[7](object, value + 1, 0);
}
