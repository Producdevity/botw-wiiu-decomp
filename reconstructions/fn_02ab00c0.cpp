extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bd61dc(void*, const void*);

extern "C" void* fn_02ab00c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(484, allocator, 4);
    if (object) {
        object = fn_02bd61dc(object, descriptor);
    }
    return object;
}
