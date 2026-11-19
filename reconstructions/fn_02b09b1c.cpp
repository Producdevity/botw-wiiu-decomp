extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a79aac(void*, const void*);

extern "C" void* fn_02b09b1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02a79aac(object, descriptor);
    }
    return object;
}
