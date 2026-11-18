extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_0324d12c(void* context) {
    if (!context)
        context = fn_0308e578(1);
    if (context) {
        *static_cast<unsigned char*>(context) = 0;
    }
    return context;
}
