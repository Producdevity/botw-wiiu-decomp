extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0231e7d4(void*, const void*);

extern "C" void* fn_02abd364(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0231e7d4(object, descriptor);
    }
    return object;
}
