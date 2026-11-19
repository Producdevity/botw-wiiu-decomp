extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0230478c(void*, const void*);

extern "C" void* fn_02abc880(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(340, allocator, 4);
    if (object) {
        object = fn_0230478c(object, descriptor);
    }
    return object;
}
