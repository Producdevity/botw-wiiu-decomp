extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022f3ba4(void*, const void*);

extern "C" void* fn_02abc110(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_022f3ba4(object, descriptor);
    }
    return object;
}
