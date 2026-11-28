extern "C" void fn_026a64dc(void* object);
extern "C" void fn_0294f720(void* owner, int mode, void* data);

namespace {
struct Object {
    void* owner;
    char padding_4[0x1C];
    char field_20;
    char padding_21[0x13];
    unsigned char* flag;
};
}

extern "C" void fn_026a64ec(void* object)
{
    Object* self = (Object*)object;
    if (*self->flag != 0) {
        fn_0294f720(self->owner, 2, &self->field_20);
    }
    fn_026a64dc(object);
}
