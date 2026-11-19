extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0250e260(void*, const void*);

extern "C" void* fn_02aca8e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(780, allocator, 4);
    if (object) {
        object = fn_0250e260(object, descriptor);
    }
    return object;
}
