extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0214ec00(void*, const void*);

extern "C" void* fn_02ab11c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_0214ec00(object, descriptor);
    }
    return object;
}
