extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_0399c2f0(unsigned* context) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(8));
    if (context) {
        context[0] = 8;
        context[1] = 1;
    }
    return context;
}
