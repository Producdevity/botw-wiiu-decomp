extern "C" void fn_025e83d8(void *);
extern "C" void fn_0288ac9c(void*, void*, void*);
extern "C" void fn_0294f828(void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x17C];
    char field_180;
};
}

extern "C" void fn_0288b6bc(void** object)
{
    Object* self = (Object*)object;
    fn_0294f828(self->owner, &self->field_180);
    fn_0288ac9c(object, 0, 0);
    fn_025e83d8(object);
}
