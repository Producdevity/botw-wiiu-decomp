extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_03cef838(void* context) {
    if (!context)
        context = fn_0308e578(1);
    if (context) {
        *static_cast<unsigned char*>(context) = 1;
    }
    return context;
}
