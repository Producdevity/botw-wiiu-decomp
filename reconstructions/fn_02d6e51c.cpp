namespace {
struct State { unsigned char padding[24]; unsigned flags; };
}
extern "C" void* fn_02d35acc(void* context);
extern "C" bool fn_02d6e51c(void* context) {
    const State* state = static_cast<const State*>(fn_02d35acc(context));
    return (state->flags >> 1) & 1u;
}
