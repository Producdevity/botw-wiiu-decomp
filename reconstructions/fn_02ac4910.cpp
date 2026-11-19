extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023da164(void*, const void*);

extern "C" void* fn_02ac4910(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_023da164(object, descriptor);
    }
    return object;
}
