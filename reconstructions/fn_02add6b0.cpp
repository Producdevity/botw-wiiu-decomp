extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b3fb8(void*, const void*);

extern "C" void* fn_02add6b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_029b3fb8(object, descriptor);
    }
    return object;
}
