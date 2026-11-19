extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023a6244(void*, const void*);

extern "C" void* fn_02ac35f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_023a6244(object, descriptor);
    }
    return object;
}
