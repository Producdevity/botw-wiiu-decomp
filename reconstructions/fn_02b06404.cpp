namespace {
struct State { unsigned char padding[2540]; int value; };
}
extern "C" void* fn_02af8fd8(void* context);
extern "C" int fn_02b06404(void* context) {
    const State* state = static_cast<const State*>(fn_02af8fd8(context));
    int value = -1;
    if (state)
        value = state->value;
    return value;
}
