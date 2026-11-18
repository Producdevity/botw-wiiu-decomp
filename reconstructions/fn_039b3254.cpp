extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_039b3254(unsigned* context) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(4));
    if (context) {
        context[0] = 1;
    }
    return context;
}
