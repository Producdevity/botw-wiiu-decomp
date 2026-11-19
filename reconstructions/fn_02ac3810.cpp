extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023a8070(void*, const void*);

extern "C" void* fn_02ac3810(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023a8070(object, descriptor);
    }
    return object;
}
