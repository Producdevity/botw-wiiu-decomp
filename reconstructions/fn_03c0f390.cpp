extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_03c0f390(void* context) {
    if (!context)
        context = fn_0308e578(24);
    if (context) {
        *reinterpret_cast<unsigned char*>(static_cast<unsigned char*>(context) + 18) = 0;
    }
    return context;
}
