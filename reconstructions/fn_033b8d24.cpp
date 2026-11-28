extern "C" void fn_0378dc60(int, int);
extern "C" void fn_0379c1b4(void *, void *, void *);

namespace {
struct Object {
    char padding_0[0x610];
    char field_610[0xC];
    char field_61c;
};
}

extern "C" void fn_033b8d24(void* object)
{
    Object* self = (Object*)object;
    fn_0378dc60((int)&self->field_61c, (int)self->field_610);
    fn_0379c1b4(object, (void*)0x2C, (void*)1);
}
