extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0295c138(void*, const void*);

extern "C" void* fn_02adab58(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0295c138(object, descriptor);
    }
    return object;
}
