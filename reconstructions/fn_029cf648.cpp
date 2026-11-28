extern "C" void fn_029cf2c0(void* object);
extern "C" void fn_034cc350(int value);
extern "C" float data_1017f628;

namespace {
struct Object {
    char padding_0[0x14];
    int value_14;
    float value_18;
};
}

extern "C" void fn_029cf648(void* object)
{
    Object* self = (Object*)object;
    fn_034cc350(self->value_14);
    self->value_18 = data_1017f628;
    fn_029cf2c0(object);
}
