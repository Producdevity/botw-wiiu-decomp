extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023d0880(void*, const void*);

extern "C" void* fn_02ac4668(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_023d0880(object, descriptor);
    }
    return object;
}
