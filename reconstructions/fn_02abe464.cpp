extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02345088(void*, const void*);

extern "C" void* fn_02abe464(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_02345088(object, descriptor);
    }
    return object;
}
