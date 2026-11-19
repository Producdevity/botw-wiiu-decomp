extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02357578(void*, const void*);

extern "C" void* fn_02abea80(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_02357578(object, descriptor);
    }
    return object;
}
