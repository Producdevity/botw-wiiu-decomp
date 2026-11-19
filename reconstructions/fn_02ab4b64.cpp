extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0207a9bc(void*, const void*);

extern "C" void* fn_02ab4b64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_0207a9bc(object, descriptor);
    }
    return object;
}
