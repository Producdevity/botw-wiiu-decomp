namespace {
struct Context {
    unsigned char unknown_00[4];
    void* target;
};
}

extern "C" void fn_034878b0(void* target, const unsigned* mode);

extern "C" void fn_0344ba94(void* context, const unsigned* mode) {
    unsigned copy = *mode;
    fn_034878b0(static_cast<Context*>(context)->target, &copy);
}
