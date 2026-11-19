extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b17a8(void*, const void*);

extern "C" void* fn_02aab330(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_032b17a8(object, descriptor);
    }
    return object;
}
