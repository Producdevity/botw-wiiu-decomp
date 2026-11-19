extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0221ad68(void*, const void*);

extern "C" void* fn_02ab75a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_0221ad68(object, descriptor);
    }
    return object;
}
