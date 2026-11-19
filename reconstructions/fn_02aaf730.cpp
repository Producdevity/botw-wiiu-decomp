extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02b906e0(void*, const void*);

extern "C" void* fn_02aaf730(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(516, allocator, 4);
    if (object) {
        object = fn_02b906e0(object, descriptor);
    }
    return object;
}
