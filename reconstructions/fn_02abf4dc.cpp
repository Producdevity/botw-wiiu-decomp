extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c7ddd4(void*, const void*);

extern "C" void* fn_02abf4dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c7ddd4(object, descriptor);
    }
    return object;
}
