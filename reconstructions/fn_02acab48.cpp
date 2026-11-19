extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02518a80(void*, const void*);

extern "C" void* fn_02acab48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_02518a80(object, descriptor);
    }
    return object;
}
