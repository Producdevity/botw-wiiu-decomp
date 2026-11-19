extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02345928(void*, const void*);

extern "C" void* fn_02abe354(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_02345928(object, descriptor);
    }
    return object;
}
