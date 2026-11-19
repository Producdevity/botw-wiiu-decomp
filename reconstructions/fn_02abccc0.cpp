extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023123fc(void*, const void*);

extern "C" void* fn_02abccc0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_023123fc(object, descriptor);
    }
    return object;
}
