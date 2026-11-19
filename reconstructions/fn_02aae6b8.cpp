extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0245c95c(void*, const void*);

extern "C" void* fn_02aae6b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0245c95c(object, descriptor);
    }
    return object;
}
