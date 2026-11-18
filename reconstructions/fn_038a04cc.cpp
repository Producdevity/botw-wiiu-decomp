extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_038a04cc(void* context) {
    if (!context)
        context = fn_0308e578(16);
    if (context) {
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 12) = 0;
        *static_cast<unsigned*>(context) = 0;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 8) = 0;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 4) = 0;
    }
    return context;
}
