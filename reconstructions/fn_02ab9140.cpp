extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023e7ae4(void*, const void*);

extern "C" void* fn_02ab9140(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023e7ae4(object, descriptor);
    }
    return object;
}
