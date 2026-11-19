extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023006f8(void*, const void*);

extern "C" void* fn_02abc6e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_023006f8(object, descriptor);
    }
    return object;
}
