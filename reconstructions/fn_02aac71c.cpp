extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0350defc(void*, const void*);

extern "C" void* fn_02aac71c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_0350defc(object, descriptor);
    }
    return object;
}
