struct StateSource {
    char pad0[0x90];
    void* state;
};

struct StateLink {
    char pad0[0x39c];
    StateSource* source;
};

struct StateContext {
    char pad0[0x4];
    StateLink* link;
};

extern "C" void* fn_02af8fd8(void* context) {
    StateLink* link = static_cast<StateContext*>(context)->link;
    if (link == 0) {
        return 0;
    }
    StateSource* source = link->source;
    if (source == 0) {
        return 0;
    }
    return source->state;
}
