extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025d3cf4(void*, const void*);

extern "C" void* fn_02acdad4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(212, allocator, 4);
    if (object) {
        object = fn_025d3cf4(object, descriptor);
    }
    return object;
}
