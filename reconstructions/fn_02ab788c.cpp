extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0221fddc(void*, const void*);

extern "C" void* fn_02ab788c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0221fddc(object, descriptor);
    }
    return object;
}
