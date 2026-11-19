extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02888a28(void*, const void*);

extern "C" void* fn_02ad767c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(416, allocator, 4);
    if (object) {
        object = fn_02888a28(object, descriptor);
    }
    return object;
}
