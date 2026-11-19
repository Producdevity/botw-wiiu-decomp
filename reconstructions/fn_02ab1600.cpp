extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02158d70(void*, const void*);

extern "C" void* fn_02ab1600(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02158d70(object, descriptor);
    }
    return object;
}
