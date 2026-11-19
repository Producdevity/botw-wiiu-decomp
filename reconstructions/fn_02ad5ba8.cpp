extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0281ab28(void*, const void*);

extern "C" void* fn_02ad5ba8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(188, allocator, 4);
    if (object) {
        object = fn_0281ab28(object, descriptor);
    }
    return object;
}
