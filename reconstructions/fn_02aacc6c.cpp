extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020b2640(void*, const void*);

extern "C" void* fn_02aacc6c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_020b2640(object, descriptor);
    }
    return object;
}
