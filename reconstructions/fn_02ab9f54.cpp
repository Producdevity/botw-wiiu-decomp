extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0227b2a8(void*, const void*);

extern "C" void* fn_02ab9f54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_0227b2a8(object, descriptor);
    }
    return object;
}
