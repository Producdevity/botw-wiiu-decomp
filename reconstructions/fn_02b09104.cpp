extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a642bc(void*, const void*);

extern "C" void* fn_02b09104(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a642bc(object, descriptor);
    }
    return object;
}
