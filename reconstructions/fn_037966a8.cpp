struct LinkedState {
    char pad0[0x50];
    void* value;
};

struct StateOwner {
    char pad0[0x3a0];
    LinkedState* state;
};

extern "C" void* fn_037966a8(void* context) {
    LinkedState* state = static_cast<StateOwner*>(context)->state;
    if (state == 0) {
        return 0;
    }
    return state->value;
}
