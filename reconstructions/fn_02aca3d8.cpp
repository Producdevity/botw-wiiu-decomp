extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0250162c(void*, const void*);

extern "C" void* fn_02aca3d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2016, allocator, 4);
    if (object) {
        object = fn_0250162c(object, descriptor);
    }
    return object;
}
