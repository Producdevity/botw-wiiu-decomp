extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d778c(void*, const void*);

extern "C" void* fn_02adf8f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_029d778c(object, descriptor);
    }
    return object;
}
