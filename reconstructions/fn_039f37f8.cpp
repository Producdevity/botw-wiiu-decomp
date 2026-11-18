extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_039f37f8(void* context) {
    if (!context)
        context = fn_0308e578(8);
    if (context) {
        *static_cast<unsigned*>(context) = 1;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 5) = 1;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 4) = 1;
    }
    return context;
}
