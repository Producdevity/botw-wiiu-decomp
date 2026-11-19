extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a4e808(void*, const void*);

extern "C" void* fn_02b08840(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02a4e808(object, descriptor);
    }
    return object;
}
