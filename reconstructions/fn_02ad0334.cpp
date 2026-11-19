extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02678e60(void*, const void*);

extern "C" void* fn_02ad0334(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_02678e60(object, descriptor);
    }
    return object;
}
