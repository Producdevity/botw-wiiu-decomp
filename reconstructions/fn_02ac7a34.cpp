extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e04dc(void*, const void*);

extern "C" void* fn_02ac7a34(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_021e04dc(object, descriptor);
    }
    return object;
}
