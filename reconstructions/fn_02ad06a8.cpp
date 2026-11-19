extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02688150(void*, const void*);

extern "C" void* fn_02ad06a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02688150(object, descriptor);
    }
    return object;
}
