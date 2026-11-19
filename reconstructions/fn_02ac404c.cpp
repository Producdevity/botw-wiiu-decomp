extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b9624(void*, const void*);

extern "C" void* fn_02ac404c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_023b9624(object, descriptor);
    }
    return object;
}
