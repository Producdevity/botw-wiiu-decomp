extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_03b4aa70(void* context) {
    if (!context)
        context = fn_0308e578(4);
    if (context) {
        *static_cast<unsigned char*>(context) = 0;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 1) = 1;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 2) = 2;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 3) = 3;
    }
    return context;
}
