extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0295c4f8(void*, const void*);

extern "C" void* fn_02adab9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_0295c4f8(object, descriptor);
    }
    return object;
}
