extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02268518(void*, const void*);

extern "C" void* fn_02ab93e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02268518(object, descriptor);
    }
    return object;
}
