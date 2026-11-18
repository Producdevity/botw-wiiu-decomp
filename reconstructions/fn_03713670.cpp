extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_03713670(unsigned* context, unsigned value1, unsigned value2) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(12));
    if (context) {
        context[0] = value1;
        context[1] = value2;
        context[2] = (-1);
    }
    return context;
}
