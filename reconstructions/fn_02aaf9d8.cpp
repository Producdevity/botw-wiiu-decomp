extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ba8fa8(void*, const void*);

extern "C" void* fn_02aaf9d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02ba8fa8(object, descriptor);
    }
    return object;
}
