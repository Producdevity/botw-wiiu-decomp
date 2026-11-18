extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_0409a7c0(void* context, unsigned value1) {
    if (!context)
        context = fn_0308e578(1);
    if (context) {
        *static_cast<unsigned char*>(context) = value1;
    }
    return context;
}
