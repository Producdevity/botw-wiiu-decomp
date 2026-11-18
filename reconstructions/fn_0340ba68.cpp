extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_0340ba68(void* context) {
    if (!context)
        context = fn_0308e578(32);
    if (context) {
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 16) = 0;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 20) = 0;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 24) = 0;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 28) = 0;
        *static_cast<unsigned*>(context) = 0;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 4) = 0;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 8) = 0;
        *reinterpret_cast<unsigned*>(static_cast<unsigned char*>(context) + 12) = 0;
    }
    return context;
}
