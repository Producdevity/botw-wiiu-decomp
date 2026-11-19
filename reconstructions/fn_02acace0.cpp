extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02523ee8(void*, const void*);

extern "C" void* fn_02acace0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_02523ee8(object, descriptor);
    }
    return object;
}
