namespace {
struct State {
    unsigned char padding[2028];
    int value;
};
}

extern "C" void* fn_02af8fd8(void* context);

extern "C" int fn_02afcb80(void* context) {
    const State* state = static_cast<const State*>(fn_02af8fd8(context));
    int value = 0;
    if (state)
        value = state->value;
    return value;
}
