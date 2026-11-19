extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0246fee0(void*, const void*);

extern "C" void* fn_02ac79f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(312, allocator, 4);
    if (object) {
        object = fn_0246fee0(object, descriptor);
    }
    return object;
}
