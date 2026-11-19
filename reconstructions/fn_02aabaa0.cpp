extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032cc59c(void*, const void*);

extern "C" void* fn_02aabaa0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2692, allocator, 4);
    if (object) {
        object = fn_032cc59c(object, descriptor);
    }
    return object;
}
