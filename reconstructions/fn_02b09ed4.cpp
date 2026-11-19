extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a82d18(void*, const void*);

extern "C" void* fn_02b09ed4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_02a82d18(object, descriptor);
    }
    return object;
}
