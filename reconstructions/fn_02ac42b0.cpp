extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023c1980(void*, const void*);

extern "C" void* fn_02ac42b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_023c1980(object, descriptor);
    }
    return object;
}
