extern "C" void fn_02af0df4(void *);

namespace {
struct VTable {
    char padding_0[0x134];
    void (*method_134)(void*);
};

struct Other {
    char padding_0[0xE8];
    VTable* vtable;
};
}

extern "C" void fn_02af0ea0(void* object, void* other)
{
    Other* target = (Other*)other;
    target->vtable->method_134(target);
    fn_02af0df4(object);
}
