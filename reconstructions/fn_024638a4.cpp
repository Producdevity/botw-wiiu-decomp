extern "C" void fn_0383ec68(void*, int, int, void*);
extern "C" void fn_0383f67c(void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x1C];
    char field_20;
};
}

extern "C" void fn_024638a4(void** object, void* context)
{
    Object* self = (Object*)object;
    fn_0383f67c(&self->field_20, context);
    fn_0383ec68(self->owner, 0x1C, 0, 0);
}
