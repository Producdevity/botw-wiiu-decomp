extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b5b7c(void*, const void*);

extern "C" void* fn_02add848(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_029b5b7c(object, descriptor);
    }
    return object;
}
