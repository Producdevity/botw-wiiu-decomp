extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0231d904(void*, const void*);

extern "C" void* fn_02abde48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0231d904(object, descriptor);
    }
    return object;
}
