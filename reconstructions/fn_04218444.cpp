namespace {
struct State { unsigned first; unsigned second; };
}
extern "C" void* fn_04218444(void* context) {
    State* state = static_cast<State*>(context);
    state->first = 0;
    state->second = 0;
    return context;
}
