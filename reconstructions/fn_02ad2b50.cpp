extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027422c4(void*, const void*);

extern "C" void* fn_02ad2b50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_027422c4(object, descriptor);
    }
    return object;
}
