extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b2574(void*, const void*);

extern "C" void* fn_02add3c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029b2574(object, descriptor);
    }
    return object;
}
