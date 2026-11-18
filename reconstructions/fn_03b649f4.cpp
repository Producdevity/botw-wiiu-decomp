extern "C" void* fn_0308e578(unsigned size);

extern "C" unsigned* fn_03b649f4(unsigned* context) {
    if (!context)
        context = static_cast<unsigned*>(fn_0308e578(32));
    if (context) {
        context[4] = 0;
        context[5] = 0;
        context[6] = 0;
        context[7] = 0;
        context[0] = 0;
        context[1] = 0;
        context[2] = 0;
        context[3] = 0;
    }
    return context;
}
