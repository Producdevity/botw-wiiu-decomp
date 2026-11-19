extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025d15e4(void*, const void*);

extern "C" void* fn_02acd8b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_025d15e4(object, descriptor);
    }
    return object;
}
