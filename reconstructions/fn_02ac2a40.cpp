extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0238ae4c(void*, const void*);

extern "C" void* fn_02ac2a40(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(288, allocator, 4);
    if (object) {
        object = fn_0238ae4c(object, descriptor);
    }
    return object;
}
