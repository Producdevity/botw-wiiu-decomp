extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020ff454(void*, const void*);

extern "C" void* fn_02aae784(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_020ff454(object, descriptor);
    }
    return object;
}
