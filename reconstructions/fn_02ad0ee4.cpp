extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026afa2c(void*, const void*);

extern "C" void* fn_02ad0ee4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_026afa2c(object, descriptor);
    }
    return object;
}
