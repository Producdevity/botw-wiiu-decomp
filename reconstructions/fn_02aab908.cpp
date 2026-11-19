extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032c8470(void*, const void*);

extern "C" void* fn_02aab908(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_032c8470(object, descriptor);
    }
    return object;
}
