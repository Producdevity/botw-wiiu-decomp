extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0246e360(void*, const void*);

extern "C" void* fn_02ac7924(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0246e360(object, descriptor);
    }
    return object;
}
