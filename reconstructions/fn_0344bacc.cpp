namespace {
struct Context {
    unsigned char unknown_00[4];
    void* target;
};
}

extern "C" void fn_0348792c(void* target, const unsigned* mode);

extern "C" void fn_0344bacc(void* context, const unsigned* mode) {
    unsigned copy = *mode;
    fn_0348792c(static_cast<Context*>(context)->target, &copy);
}
