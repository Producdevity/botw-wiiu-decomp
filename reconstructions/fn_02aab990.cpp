extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032c93e0(void*, const void*);

extern "C" void* fn_02aab990(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1588, allocator, 4);
    if (object) {
        object = fn_032c93e0(object, descriptor);
    }
    return object;
}
