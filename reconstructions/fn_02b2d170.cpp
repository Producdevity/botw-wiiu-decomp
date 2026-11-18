extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_02b2d170(unsigned* context, unsigned value1) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(8));
    if (context) {
        context[1] = value1;
        context[0] = 0;
    }
    return context;
}
