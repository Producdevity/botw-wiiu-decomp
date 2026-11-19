extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029e458c(void*, const void*);

extern "C" void* fn_02ae03d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_029e458c(object, descriptor);
    }
    return object;
}
