extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02607744(void*, const void*);

extern "C" void* fn_02ace420(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_02607744(object, descriptor);
    }
    return object;
}
