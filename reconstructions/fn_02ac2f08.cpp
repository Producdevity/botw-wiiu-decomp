extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02397990(void*, const void*);

extern "C" void* fn_02ac2f08(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(212, allocator, 4);
    if (object) {
        object = fn_02397990(object, descriptor);
    }
    return object;
}
