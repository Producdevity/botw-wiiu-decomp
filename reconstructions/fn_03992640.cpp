extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_03992640(void* context) {
    if (!context)
        context = fn_0308e578(12);
    if (context) {
        *static_cast<unsigned*>(context) = 1;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 8) = 1;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 4) = 1;
    }
    return context;
}
