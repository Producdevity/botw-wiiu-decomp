extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0226a5a4(void*, const void*);

extern "C" void* fn_02ab95c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0226a5a4(object, descriptor);
    }
    return object;
}
