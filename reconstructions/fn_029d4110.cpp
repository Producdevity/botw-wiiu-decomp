extern "C" void fn_0294f720(void *, int, void *);

namespace {
struct Object {
    void* owner;
    char padding_4[0x10];
    char field_14[0x14];
    char field_28[0x14];
    char field_3c;
};
}

extern "C" void fn_029d4110(void** object)
{
    Object* self = (Object*)object;
    fn_0294f720(self->owner, 4, self->field_14);
    fn_0294f720(self->owner, 1, self->field_28);
    fn_0294f720(self->owner, 3, &self->field_3c);
}
