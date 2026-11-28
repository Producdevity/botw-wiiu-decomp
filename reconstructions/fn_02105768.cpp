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
    char padding_4[0x34];
    signed char flag;
};
}

extern "C" void fn_02105768(void* object)
{
    Object* self = (Object*)object;
    Owner* owner = self->owner;
    owner->vtable->method_35c(owner);
    self->flag = 1;
}
