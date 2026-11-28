extern "C" void fn_0254d1fc(void*);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_029530a0(void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x140];
    char field_144;
};
}

extern "C" void fn_0276471c(void** object)
{
    Object* self = (Object*)object;
    fn_029530a0(self->owner);
    fn_0294f828(self->owner, &self->field_144);
    fn_0254d1fc(object);
}
