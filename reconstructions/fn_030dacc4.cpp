namespace {
struct VTable {
    char padding_0[0x8C];
    int (*onDisable)(void*);
    char padding_90[4];
    int (*onReset)(void*);
};

struct Object {
    char padding_0[0x70];
    VTable* vtable;
    char padding_74[0x188];
    int enabled;
};
}

extern "C" void fn_030dacc4(void* object, int enabled) {
    ((Object*)object)->enabled = enabled;
    if (enabled == 0) {
        ((Object*)object)->vtable->onDisable(object);
        ((Object*)object)->vtable->onReset(object);
    }
}
