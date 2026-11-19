extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025acd14(void*, const void*);

extern "C" void* fn_02acd364(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_025acd14(object, descriptor);
    }
    return object;
}
