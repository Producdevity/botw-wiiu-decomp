extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c920fc(void*, const void*);

extern "C" void* fn_02abfa70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c920fc(object, descriptor);
    }
    return object;
}
