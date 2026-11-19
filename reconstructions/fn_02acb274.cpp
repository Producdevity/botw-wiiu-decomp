extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02537acc(void*, const void*);

extern "C" void* fn_02acb274(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_02537acc(object, descriptor);
    }
    return object;
}
