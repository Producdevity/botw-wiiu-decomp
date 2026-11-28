extern "C" void fn_0254bff4(void*);
extern "C" void fn_0294f720(void *, int, void *);
extern "C" void fn_0339bd70(void *);

namespace {
struct Object {
    void* owner;
    char padding_4[0x140];
    char field_144;
};
}

extern "C" void fn_027640f8(void** object)
{
    Object* self = (Object*)object;
    fn_0254bff4(object);
    fn_0339bd70(self->owner);
    fn_0294f720(self->owner, 4, &self->field_144);
}
