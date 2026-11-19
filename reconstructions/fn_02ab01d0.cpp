extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02be4370(void*, const void*);

extern "C" void* fn_02ab01d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_02be4370(object, descriptor);
    }
    return object;
}
