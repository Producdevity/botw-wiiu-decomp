namespace {
struct VTable {
    char padding_0[0x4C];
    void (*method_4c)(void*);
};

struct Object {
    char padding_0[0xC];
    VTable* vtable;
};
}

extern "C" int fn_02534224(void* object)
{
    Object* self = (Object*)object;
    self->vtable->method_4c(object);
    return 1;
}
