extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023dbeb8(void*, const void*);

extern "C" void* fn_02ac4998(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(240, allocator, 4);
    if (object) {
        object = fn_023dbeb8(object, descriptor);
    }
    return object;
}
