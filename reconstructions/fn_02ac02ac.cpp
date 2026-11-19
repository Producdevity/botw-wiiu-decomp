extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02ca8364(void*, const void*);

extern "C" void* fn_02ac02ac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02ca8364(object, descriptor);
    }
    return object;
}
