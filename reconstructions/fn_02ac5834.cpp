extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0240c968(void*, const void*);

extern "C" void* fn_02ac5834(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(276, allocator, 4);
    if (object) {
        object = fn_0240c968(object, descriptor);
    }
    return object;
}
