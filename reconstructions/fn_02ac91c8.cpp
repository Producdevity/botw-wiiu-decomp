extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025a0360(void*, const void*);

extern "C" void* fn_02ac91c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_025a0360(object, descriptor);
    }
    return object;
}
