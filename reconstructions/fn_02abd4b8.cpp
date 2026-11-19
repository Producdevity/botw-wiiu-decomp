extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023213ac(void*, const void*);

extern "C" void* fn_02abd4b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_023213ac(object, descriptor);
    }
    return object;
}
