extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02879608(void*, const void*);

extern "C" void* fn_02ad723c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(624, allocator, 4);
    if (object) {
        object = fn_02879608(object, descriptor);
    }
    return object;
}
