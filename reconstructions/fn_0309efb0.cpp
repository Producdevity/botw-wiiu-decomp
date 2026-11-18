extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_0309efb0(unsigned* context) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(8));
    if (context) {
        context[0] = 0x3000000u;
        context[1] = 0;
    }
    return context;
}
