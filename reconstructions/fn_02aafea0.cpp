extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bc9f24(void*, const void*);

extern "C" void* fn_02aafea0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(240, allocator, 4);
    if (object) {
        object = fn_02bc9f24(object, descriptor);
    }
    return object;
}
