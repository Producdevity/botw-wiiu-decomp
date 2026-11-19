extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029ae71c(void*, const void*);

extern "C" void* fn_02adceb8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_029ae71c(object, descriptor);
    }
    return object;
}
