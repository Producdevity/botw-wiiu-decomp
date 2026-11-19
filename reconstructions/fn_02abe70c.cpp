extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0234d194(void*, const void*);

extern "C" void* fn_02abe70c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0234d194(object, descriptor);
    }
    return object;
}
