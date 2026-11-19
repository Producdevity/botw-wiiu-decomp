extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0234e598(void*, const void*);

extern "C" void* fn_02abe794(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0234e598(object, descriptor);
    }
    return object;
}
