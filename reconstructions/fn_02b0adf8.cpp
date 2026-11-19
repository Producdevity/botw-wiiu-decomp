extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02aa5f04(void*, const void*);

extern "C" void* fn_02b0adf8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_02aa5f04(object, descriptor);
    }
    return object;
}
