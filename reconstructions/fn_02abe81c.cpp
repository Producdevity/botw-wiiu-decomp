extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0234f7c8(void*, const void*);

extern "C" void* fn_02abe81c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_0234f7c8(object, descriptor);
    }
    return object;
}
