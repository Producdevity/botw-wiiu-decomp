extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0254f424(void*, const void*);

extern "C" void* fn_02acbc04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0254f424(object, descriptor);
    }
    return object;
}
