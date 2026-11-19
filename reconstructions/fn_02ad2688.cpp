extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0272c4d4(void*, const void*);

extern "C" void* fn_02ad2688(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(440, allocator, 4);
    if (object) {
        object = fn_0272c4d4(object, descriptor);
    }
    return object;
}
