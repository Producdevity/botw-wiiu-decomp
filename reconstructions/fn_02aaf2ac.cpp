extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0211de20(void*, const void*);

extern "C" void* fn_02aaf2ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_0211de20(object, descriptor);
    }
    return object;
}
