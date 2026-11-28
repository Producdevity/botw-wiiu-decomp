extern "C" void fn_0294f828(void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x10];
    char field_14[0x14];
    char field_28[0x14];
    char field_3c;
};
}

extern "C" void fn_029d416c(void** object)
{
    Object* self = (Object*)object;
    fn_0294f828(self->owner, self->field_14);
    fn_0294f828(self->owner, self->field_28);
    fn_0294f828(self->owner, &self->field_3c);
}
