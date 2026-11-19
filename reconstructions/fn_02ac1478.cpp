extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cedd60(void*, const void*);

extern "C" void* fn_02ac1478(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cedd60(object, descriptor);
    }
    return object;
}
