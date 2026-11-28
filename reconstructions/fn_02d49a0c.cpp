namespace {
struct VTable {
    char padding_0[0x2BC];
    void** (*method_2bc)(void*);
};

struct Owner {
    char padding_0[0xE8];
    VTable* vtable;
};

struct Object {
    char padding_0[0x30];
    Owner* owner;
};
}

extern "C" void fn_02d49a0c(void* object, void* value)
{
    Owner* owner = ((Object*)object)->owner;
    if (owner != 0) {
        *owner->vtable->method_2bc(owner) = value;
    }
}
