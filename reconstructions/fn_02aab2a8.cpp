extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b127c(void*, const void*);

extern "C" void* fn_02aab2a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_032b127c(object, descriptor);
    }
    return object;
}
