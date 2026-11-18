extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_034a8fb4(unsigned* context) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(16));
    if (context) {
        context[3] = 0;
        context[0] = 0;
        context[2] = 0;
        context[1] = 0;
    }
    return context;
}
