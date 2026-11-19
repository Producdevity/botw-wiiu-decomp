extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d7348(void*, const void*);

extern "C" void* fn_02adf8b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_029d7348(object, descriptor);
    }
    return object;
}
