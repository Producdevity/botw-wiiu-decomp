extern "C" void fn_0307a248(int value);

namespace {
struct VTable {
    char padding_0[0x35C];
    void (*method_35c)(void*);
};

struct Owner {
    char padding_0[0xE8];
    VTable* vtable;
};

struct Object {
    Owner* owner;
    char padding_4[0xC];
    int* value;
};
}

extern "C" void fn_0216fb60(void* object)
{
    Object* self = (Object*)object;
    fn_0307a248(*self->value);
    Owner* owner = self->owner;
    owner->vtable->method_35c(owner);
}
