namespace {
struct VTable {
    char padding_0[0x1C];
    void (*method_1c)(void*);
};

struct Object {
    void* owner;
    char padding_4[0x14];
    int value;
    VTable* vtable;
};
}

extern "C" void fn_0383e968(void* owner, int value, int a, int b);

extern "C" void fn_029cab04(void* object)
{
    Object* self = (Object*)object;
    self->vtable->method_1c(&self->value);
    fn_0383e968(self->owner, self->value, 2, 0);
}
