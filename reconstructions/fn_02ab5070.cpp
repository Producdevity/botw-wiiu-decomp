extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021dc264(void*, const void*);

extern "C" void* fn_02ab5070(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_021dc264(object, descriptor);
    }
    return object;
}
