namespace {
struct VTable {
    char padding_0[0x24];
    int (*method_24)(void*);
};

struct Object {
    VTable* vtable;
    char padding_4[0x60];
    int value;
};
}

extern "C" int fn_030df870(void* object)
{
    Object* self = (Object*)object;
    int value = self->value;
    return value == self->vtable->method_24(object);
}
