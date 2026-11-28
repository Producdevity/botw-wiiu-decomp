extern "C" void fn_024e57e4(void** object);

namespace {
struct VTable {
    char padding_0[0x30C];
    void (*method_30c)(void*);
};

struct Owner {
    char padding_0[0xE8];
    VTable* vtable;
};
}

extern "C" void fn_024e57f4(void** object)
{
    Owner* owner = (Owner*)*object;
    owner->vtable->method_30c(owner);
    fn_024e57e4(object);
}
