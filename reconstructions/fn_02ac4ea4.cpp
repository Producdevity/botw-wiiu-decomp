extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023ec4bc(void*, const void*);

extern "C" void* fn_02ac4ea4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_023ec4bc(object, descriptor);
    }
    return object;
}
