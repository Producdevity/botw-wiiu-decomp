extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0238fbe8(void*, const void*);

extern "C" void* fn_02ac2b0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(364, allocator, 4);
    if (object) {
        object = fn_0238fbe8(object, descriptor);
    }
    return object;
}
