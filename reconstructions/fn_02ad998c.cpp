extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0291f0f4(void*, const void*);

extern "C" void* fn_02ad998c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_0291f0f4(object, descriptor);
    }
    return object;
}
