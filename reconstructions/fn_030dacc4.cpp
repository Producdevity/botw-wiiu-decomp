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

extern "C" void fn_030dacc4(void* arg0, int enabled) {
    ((Object*)arg0)->enabled = enabled;
    if (enabled == 0) {
        ((Object*)arg0)->vtable->onDisable(arg0);
        ((Object*)arg0)->vtable->onReset(arg0);
    }
}
