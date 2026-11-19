extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02219e70(void*, const void*);

extern "C" void* fn_02ab7490(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02219e70(object, descriptor);
    }
    return object;
}
