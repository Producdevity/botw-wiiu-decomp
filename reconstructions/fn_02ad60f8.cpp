extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02836570(void*, const void*);

extern "C" void* fn_02ad60f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02836570(object, descriptor);
    }
    return object;
}
