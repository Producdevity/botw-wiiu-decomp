extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02324fd4(void*, const void*);

extern "C" void* fn_02abded0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(192, allocator, 4);
    if (object) {
        object = fn_02324fd4(object, descriptor);
    }
    return object;
}
