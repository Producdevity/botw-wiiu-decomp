extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_03e94fb0(unsigned* context, unsigned value1) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(4));
    if (context) {
        context[0] = value1;
    }
    return context;
}
