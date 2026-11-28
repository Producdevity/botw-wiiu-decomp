namespace { struct Object { void* owner; }; }
extern "C" void* fn_037966a8(void* context);
extern "C" void fn_0344bacc(void* context, const unsigned* mode);
extern "C" void fn_0282bacc(void* context) {
    void* state = fn_037966a8(static_cast<Object*>(context)->owner);
    if (state) {
        unsigned mode = 8;
        fn_0344bacc(state, &mode);
    }
}
