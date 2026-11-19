extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02664438(void*, const void*);

extern "C" void* fn_02acfe28(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(380, allocator, 4);
    if (object) {
        object = fn_02664438(object, descriptor);
    }
    return object;
}
