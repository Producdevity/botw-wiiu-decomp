extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_02fd4568(void* context) {
    if (!context)
        context = fn_0308e578(8);
    if (context) {
        *static_cast<unsigned*>(context) = 0xffffffffu;
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 4) = 0;
    }
    return context;
}
