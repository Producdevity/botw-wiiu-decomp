extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02253854(void*, const void*);

extern "C" void* fn_02ab8ae0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02253854(object, descriptor);
    }
    return object;
}
