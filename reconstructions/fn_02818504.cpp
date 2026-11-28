extern "C" int fn_02b62a40();

namespace {
struct VTable {
    char padding_0[0x17C];
    void (*method_17c)(void*, int);
};

struct Object {
    char padding_0[0xC];
    VTable* vtable;
};
}

extern "C" void fn_02818504(void* object)
{
    Object* self = (Object*)object;
    void (*method)(void*, int) = self->vtable->method_17c;
    method(object, fn_02b62a40());
}
