extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029bed68(void*, const void*);

extern "C" void* fn_02ade084(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_029bed68(object, descriptor);
    }
    return object;
}
