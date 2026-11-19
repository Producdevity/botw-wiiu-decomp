extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b52b4(void*, const void*);

extern "C" void* fn_02aab50c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_032b52b4(object, descriptor);
    }
    return object;
}
