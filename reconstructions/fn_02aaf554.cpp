extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0212e474(void*, const void*);

extern "C" void* fn_02aaf554(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_0212e474(object, descriptor);
    }
    return object;
}
