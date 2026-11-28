namespace { struct Object { void* owner; }; }
extern "C" void* fn_037966a8(void* context);
extern "C" void fn_0344a898(void*, void*);
extern "C" void fn_02d0897c(void* context) {
    void* state = fn_037966a8(static_cast<Object*>(context)->owner);
    if (state) {
        unsigned mode = 1;
        fn_0344a898(state, &mode);
    }
}
