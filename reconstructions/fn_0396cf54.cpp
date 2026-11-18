extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_0396cf54(unsigned* context, unsigned value1) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(4));
    if (context) {
        context[0] = value1;
    }
    return context;
}
