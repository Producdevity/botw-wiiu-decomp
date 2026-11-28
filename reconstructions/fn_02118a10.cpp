extern "C" void fn_030ea2e0(void *);

namespace {
struct VTable {
    char padding_0[0x10C];
    int (*method_10c)(void*);
};

struct Object {
    char padding_0[0xC];
    VTable* vtable;
};
}

extern "C" void fn_02118a10(void* object)
{
    if (((Object*)object)->vtable->method_10c(object) == 0) {
        fn_030ea2e0(object);
    }
}
