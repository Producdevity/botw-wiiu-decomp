namespace { struct Object { void* owner; }; }
extern "C" void* fn_037966a8(void* context);
extern "C" void fn_0344ba94(void* context, const unsigned* mode);
extern "C" void fn_028f82c0(void* context) {
    void* state = fn_037966a8(static_cast<Object*>(context)->owner);
    if (state) {
        unsigned mode = 2;
        fn_0344ba94(state, &mode);
    }
}
