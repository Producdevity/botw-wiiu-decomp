extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02870e30(void*, const void*);

extern "C" void* fn_02aca41c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(364, allocator, 4);
    if (object) {
        object = fn_02870e30(object, descriptor);
    }
    return object;
}
