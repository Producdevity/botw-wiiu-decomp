extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0225d508(void*, const void*);

extern "C" void* fn_02ab8f20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_0225d508(object, descriptor);
    }
    return object;
}
