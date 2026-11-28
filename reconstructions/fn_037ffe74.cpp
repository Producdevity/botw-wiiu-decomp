namespace {
struct VTable {
    char padding_0[0x5C];
    void (*method_5c)(void*);
};

struct Target {
    char padding_0[0xC];
    VTable* vtable;
    char padding_10[0x80];
    unsigned short flags;
};

struct Object {
    char padding_0[0x120];
    Target* target;
};
}

extern "C" void fn_037ffe74(void* object)
{
    Target* owner = ((Object*)object)->target;
    owner->vtable->method_5c(owner);
    Target* target = ((Object*)object)->target;
    unsigned int flags = target->flags | 2;
    target->flags = flags;
}
