namespace {
struct VTable {
    char padding_0[0x3C];
    void (*method_3c)();
};

struct Target {
    char padding_0[0x150];
    VTable* vtable;
};

struct Object {
    char padding_0[0x70];
    Target* target;
};
}

extern "C" int fn_02b48f70(void* object)
{
    object = ((Object*)object)->target;
    if (object != 0) {
        ((Target*)object)->vtable->method_3c();
        return 1;
    }
    return 0;
}
