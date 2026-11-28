extern "C" void fn_025e83d8(void *);
extern "C" void fn_02888fb4(void*, void*, void*);
extern "C" void fn_0294f828(void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x178];
    char field_17c;
};
}

extern "C" void fn_028898e4(void** object)
{
    Object* self = (Object*)object;
    fn_0294f828(self->owner, &self->field_17c);
    fn_02888fb4(object, 0, 0);
    fn_025e83d8(object);
}
