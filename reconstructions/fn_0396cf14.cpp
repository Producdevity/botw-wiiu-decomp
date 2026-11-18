extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_0396cf14(void* context) {
    if (!context)
        context = fn_0308e578(8);
    if (context) {
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 4) = 0;
        *static_cast<unsigned*>(context) = 0;
    }
    return context;
}
