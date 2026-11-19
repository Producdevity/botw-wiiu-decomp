extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0221681c(void*, const void*);

extern "C" void* fn_02ab722c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_0221681c(object, descriptor);
    }
    return object;
}
