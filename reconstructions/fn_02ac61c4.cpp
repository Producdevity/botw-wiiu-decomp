extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02426fcc(void*, const void*);

extern "C" void* fn_02ac61c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(176, allocator, 4);
    if (object) {
        object = fn_02426fcc(object, descriptor);
    }
    return object;
}
