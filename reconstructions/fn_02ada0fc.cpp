extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02929074(void*, const void*);

extern "C" void* fn_02ada0fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_02929074(object, descriptor);
    }
    return object;
}
