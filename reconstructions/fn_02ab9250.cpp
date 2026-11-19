extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02262be4(void*, const void*);

extern "C" void* fn_02ab9250(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_02262be4(object, descriptor);
    }
    return object;
}
