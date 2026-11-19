extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c5e848(void*, const void*);

extern "C" void* fn_02ab16cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_02c5e848(object, descriptor);
    }
    return object;
}
