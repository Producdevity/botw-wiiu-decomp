extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023ec8ec(void*, const void*);

extern "C" void* fn_02ac4e60(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_023ec8ec(object, descriptor);
    }
    return object;
}
