extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02852d80(void*, const void*);

extern "C" void* fn_02ad6934(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_02852d80(object, descriptor);
    }
    return object;
}
