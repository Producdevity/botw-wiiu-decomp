extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b59dc(void*, const void*);

extern "C" void* fn_02add804(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029b59dc(object, descriptor);
    }
    return object;
}
