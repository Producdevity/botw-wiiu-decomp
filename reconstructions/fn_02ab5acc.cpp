extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021f4098(void*, const void*);

extern "C" void* fn_02ab5acc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_021f4098(object, descriptor);
    }
    return object;
}
