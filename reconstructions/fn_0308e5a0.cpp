extern "C" void* fn_0308e4c8(void* heap, unsigned size, int alignment, unsigned mode);

extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment) {
    return fn_0308e4c8(heap, size, alignment, 1);
}
