extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02824664(void*, const void*);

extern "C" void* fn_02ad5e0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1356, allocator, 4);
    if (object) {
        object = fn_02824664(object, descriptor);
    }
    return object;
}
