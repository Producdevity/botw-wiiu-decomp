extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0243baec(void*, const void*);

extern "C" void* fn_02ac66d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_0243baec(object, descriptor);
    }
    return object;
}
