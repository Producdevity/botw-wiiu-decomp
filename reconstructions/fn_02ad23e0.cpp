extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0271ceb4(void*, const void*);

extern "C" void* fn_02ad23e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_0271ceb4(object, descriptor);
    }
    return object;
}
