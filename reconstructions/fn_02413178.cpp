extern "C" void fn_0241304c(void*, void*);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    void* owner;
    char padding_4[0x6C];
    char field_70;
};
}

extern "C" void fn_02413178(void** object)
{
    Object* self = (Object*)object;
    fn_02b616bc(&self->field_70, fn_037966a8(self->owner));
    fn_0241304c(object, 0);
}
