namespace {
struct State {
    unsigned char padding[2364];
    int value;
};
}

extern "C" void* fn_02af8fd8(void* context);

extern "C" int fn_02ae1a54(void* context) {
    const State* state = static_cast<const State*>(fn_02af8fd8(context));
    int value = 0;
    if (state)
        value = state->value;
    return value;
}
