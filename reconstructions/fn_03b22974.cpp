extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_03b22974(unsigned* context) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(12));
    if (context) {
        context[0] = 512;
        context[1] = 59;
        context[2] = 21;
    }
    return context;
}
