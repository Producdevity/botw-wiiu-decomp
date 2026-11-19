extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032d672c(void*, const void*);

extern "C" void* fn_02ac89d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_032d672c(object, descriptor);
    }
    return object;
}
