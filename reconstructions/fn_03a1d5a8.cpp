extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_03a1d5a8(unsigned* context) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(12));
    if (context) {
        context[1] = 0;
    }
    return context;
}
