extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023e5f78(void*, const void*);

extern "C" void* fn_02ac4bb8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_023e5f78(object, descriptor);
    }
    return object;
}
