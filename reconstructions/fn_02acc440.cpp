extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02566d04(void*, const void*);

extern "C" void* fn_02acc440(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(800, allocator, 4);
    if (object) {
        object = fn_02566d04(object, descriptor);
    }
    return object;
}
