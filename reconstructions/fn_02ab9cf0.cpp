extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02274310(void*, const void*);

extern "C" void* fn_02ab9cf0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02274310(object, descriptor);
    }
    return object;
}
