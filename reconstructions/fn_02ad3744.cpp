extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0276a63c(void*, const void*);

extern "C" void* fn_02ad3744(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_0276a63c(object, descriptor);
    }
    return object;
}
