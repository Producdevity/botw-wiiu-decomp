extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0253c4a0(void*, const void*);

extern "C" void* fn_02acb40c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(324, allocator, 4);
    if (object) {
        object = fn_0253c4a0(object, descriptor);
    }
    return object;
}
