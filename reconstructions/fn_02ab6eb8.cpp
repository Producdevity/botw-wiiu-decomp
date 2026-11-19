extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02227b18(void*, const void*);

extern "C" void* fn_02ab6eb8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02227b18(object, descriptor);
    }
    return object;
}
