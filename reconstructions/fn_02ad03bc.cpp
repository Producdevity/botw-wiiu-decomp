extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0267a518(void*, const void*);

extern "C" void* fn_02ad03bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0267a518(object, descriptor);
    }
    return object;
}
