namespace {
struct State { unsigned char padding[372]; unsigned flags; };
}
extern "C" void* fn_031a7bf0(void* context);
extern "C" void fn_031a79c8(void* context, unsigned flags);
extern "C" void fn_031a7fa0(void* context) {
    void* state = fn_031a7bf0(context);
    fn_031a79c8(state, static_cast<const State*>(state)->flags);
}
