extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02747e28(void*, const void*);

extern "C" void* fn_02ad2ce8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_02747e28(object, descriptor);
    }
    return object;
}
