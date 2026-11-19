extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029cf6f0(void*, const void*);

extern "C" void* fn_02aded88(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_029cf6f0(object, descriptor);
    }
    return object;
}
