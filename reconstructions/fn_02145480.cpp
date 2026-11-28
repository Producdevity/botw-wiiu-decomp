extern "C" void fn_02145408(void*);
extern "C" void fn_02250e7c(void*);
extern "C" void fn_0294f828(void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0xC8];
    char field_cc;
};
}

extern "C" void fn_02145480(void** object)
{
    Object* self = (Object*)object;
    fn_0294f828(self->owner, &self->field_cc);
    fn_02145408(object);
    fn_02250e7c(object);
}
