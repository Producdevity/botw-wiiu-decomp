extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02768b4c(void*, const void*);

extern "C" void* fn_02ad3634(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(484, allocator, 4);
    if (object) {
        object = fn_02768b4c(object, descriptor);
    }
    return object;
}
