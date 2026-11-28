extern "C" void fn_02c19c50(void*, void*);
extern "C" void fn_02c1a178(void*, void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x3C];
    char field_40;
};
}

extern "C" void fn_0206622c(void** object)
{
    Object* self = (Object*)object;
    fn_02c19c50(self->owner, &self->field_40);
    fn_02c1a178(self->owner, &self->field_40, 0);
}
