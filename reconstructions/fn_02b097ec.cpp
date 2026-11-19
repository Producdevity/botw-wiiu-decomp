extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a72cb0(void*, const void*);

extern "C" void* fn_02b097ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a72cb0(object, descriptor);
    }
    return object;
}
