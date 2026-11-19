extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023da9d8(void*, const void*);

extern "C" void* fn_02ac4954(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_023da9d8(object, descriptor);
    }
    return object;
}
