extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032c8a68(void*, const void*);

extern "C" void* fn_02aab94c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_032c8a68(object, descriptor);
    }
    return object;
}
