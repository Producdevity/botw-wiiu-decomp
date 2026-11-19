extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02504034(void*, const void*);

extern "C" void* fn_02ac8e54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(208, allocator, 4);
    if (object) {
        object = fn_02504034(object, descriptor);
    }
    return object;
}
