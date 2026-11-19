extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02838b54(void*, const void*);

extern "C" void* fn_02ad61c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2224, allocator, 4);
    if (object) {
        object = fn_02838b54(object, descriptor);
    }
    return object;
}
